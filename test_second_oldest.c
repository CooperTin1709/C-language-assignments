#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_OUTPUT 100
#define TEST_COUNT 12

typedef struct {
    char name[50];
    char input[200];
    char expected_output[MAX_OUTPUT];
    int should_succeed;
} TestCase;

TestCase tests[TEST_COUNT] = {
    // 基本功能测试
    {"基本测试 - 三个不同日期", "3\n1990 5 15\n1991 3 20\n1989 8 10", "1990-05-15\n", 1},
    {"基本测试 - 两个日期", "2\n2000 1 1\n1999 12 31", "2000-01-01\n", 1},
    {"同年不同月日测试", "3\n1995 6 15\n1995 3 20\n1995 8 10", "1995-06-15\n", 1},
    {"同年同月不同日测试", "3\n1995 5 10\n1995 5 15\n1995 5 5", "1995-05-10\n", 1},
    {"完全相同的日期", "3\n1990 5 15\n1990 5 15\n1990 5 15", "1990-05-15\n", 1},
    
    // 边界情况测试
    {"边界最小值 - 最少学生", "2\n2023 12 31\n2024 1 1", "2024-01-01\n", 1},
    {"多个相同最老日期", "4\n1985 1 1\n1985 2 1\n1985 1 2\n1990 1 1", "1985-01-02\n", 1},
    {"多个相同第二老日期", "4\n1980 1 1\n1985 1 1\n1985 1 1\n1990 1 1", "1985-01-01\n", 1},
    
    // 时间跨度测试
    {"大时间跨度", "4\n1950 1 1\n2000 12 31\n1975 6 15\n1990 3 20", "1975-06-15\n", 1},
    {"闰年测试", "3\n2000 2 29\n1999 2 28\n2001 3 1", "1999-02-28\n", 1},
    
    // 错误情况测试
    {"无效输入 - 学生数量太少", "1\n1990 5 15", "无效的学生数量\n", 1},
    {"无效输入 - 学生数量太多", "1001\n1990 5 15", "无效的学生数量\n", 1}
};

int run_test_case(TestCase test) {
    pid_t pid;
    int pipefd[2];
    char output[MAX_OUTPUT];
    int status;
    int passed = 0;
    
    if (pipe(pipefd) == -1) {
        printf("ERROR: Failed to create pipe\n");
        return 0;
    }
    
    pid = fork();
    if (pid == -1) {
        printf("ERROR: Failed to fork process\n");
        return 0;
    }
    
    if (pid == 0) { // Child process
        close(pipefd[0]);
        
        // Redirect stdout to pipe
        dup2(pipefd[1], STDOUT_FILENO);
        close(pipefd[1]);
        
        // Create a temporary input file
        FILE *temp_input = tmpfile();
        if (temp_input) {
            fprintf(temp_input, "%s", test.input);
            rewind(temp_input);
            
            // Redirect stdin from the temporary file
            dup2(fileno(temp_input), STDIN_FILENO);
            fclose(temp_input);
        }
        
        execl("./second_oldest", "second_oldest", NULL);
        exit(1); // If execl fails
    } else { // Parent process
        close(pipefd[1]);
        
        // Read output from child
        int bytes_read = read(pipefd[0], output, MAX_OUTPUT - 1);
        output[bytes_read] = '\0';
        close(pipefd[0]);
        
        wait(&status);
        
        if (WIFEXITED(status) && WEXITSTATUS(status) == 0) {
            if (test.should_succeed) {
                if (strcmp(output, test.expected_output) == 0) {
                    passed = 1;
                }
            } else {
                passed = 0; // Should have failed but didn't
            }
        } else {
            if (!test.should_succeed) {
                passed = 1; // Failed as expected
            } else {
                // Expected success but got failure, check if output matches error message
                if (strcmp(output, test.expected_output) == 0) {
                    passed = 1;
                }
            }
        }
    }
    
    return passed;
}

int main(void) {
    printf("=== 谁是老二 单元测试开始 ===\n\n");
    
    // First, compile the program
    printf("编译程序中...\n");
    int compile_result = system("gcc \"【id431】【16分】E. 谁是老二（结构体） .c\" -o second_oldest");
    if (compile_result != 0) {
        printf("ERROR: 编译失败\n");
        return 1;
    }
    printf("编译成功！\n\n");
    
    int passed_count = 0;
    int total_count = TEST_COUNT;
    
    for (int i = 0; i < total_count; i++) {
        printf("测试 %d/%d: %s\n", i + 1, total_count, tests[i].name);
        printf("  输入: %s\n", tests[i].input);
        printf("  期望: %s", tests[i].expected_output);
        
        int result = run_test_case(tests[i]);
        if (result) {
            printf("  结果: 通过 ✓\n");
            passed_count++;
        } else {
            printf("  结果: 失败 ✗\n");
        }
        printf("\n");
    }
    
    printf("=== 测试结果 ===\n");
    printf("通过: %d/%d\n", passed_count, total_count);
    printf("成功率: %.1f%%\n", (float)passed_count / total_count * 100);
    
    if (passed_count == total_count) {
        printf("所有测试通过！\n");
    } else {
        printf("有测试失败，请检查代码。\n");
    }
    
    // Clean up
    unlink("second_oldest");
    
    return (passed_count == total_count) ? 0 : 1;
}
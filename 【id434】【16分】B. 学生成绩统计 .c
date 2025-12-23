/*题目描述

输入学生个数和每个学生的数据，每个学生的数据包括学号，姓名，３门课的成绩。

结构变量包括学号，姓名，３门课的成绩，平均成绩。

要求打印出每个学生３门课的总平均成绩，以及最高分学生的姓名。

输入

学生数量和学生成绩（2位小数）

输出

学生总平均成绩和最高分数学生数据*/
#include<stdio.h>
#include<stdlib.h>

struct Student {
    char id[20];   
    char name[50];
    double score1;   
    double score2;     
    double score3;   
    double average;   
};

int main(void){
    int n=0;
    scanf("%d",&n);

    struct Student *students = (struct Student*)malloc(n * sizeof(struct Student));
    
    int max_name = 0;
    double maxAverage = -1.0;  
    
    for (int i = 0; i < n; i++) {
        scanf("%s %s %lf %lf %lf",
            students[i].id, 
            students[i].name, 
            &students[i].score1, 
            &students[i].score2,
            &students[i].score3);
            students[i].average = (students[i].score1 + students[i].score2 + students[i].score3) / 3.0;
        printf("%s %s %.2lf %.2lf %.2lf %.2lf\n",
            students[i].id, 
            students[i].name, 
            students[i].score1, 
            students[i].score2,
            students[i].score3,
            students[i].average);
        
        if (students[i].average > maxAverage) {
            maxAverage = students[i].average;
            max_name = i;
        }
    }
    
    for (int i = 0; i < n; i++) {

    }
    printf("%s %.2lf\n", students[max_name].name,students[max_name].average);

    free(students);
    return 0;
}

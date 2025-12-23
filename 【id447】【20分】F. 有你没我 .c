/*题目描述

设有2张表单A和B各保存一组学生记录，每个学生记录包含学号、姓名和性别三个信息。

从表单A中删除与表单B有相同记录的学生，记录相同是指姓名和性别都要相同但学号可以不同

可采用二维数组或结构体来保存学生记录，学生姓名用英文字母表示，性别用M（男）和F（女）表示。


输入

第一行输入表单A的长度n，即学生个数

接着每3行输入表单A的n个学生的学号、姓名、性别，每个一行

接着输入表单B的长度m

接着输入表单B的m个学生记录，类似表单A

输出

输出表单A删除记录后的学生学号，一行输出一个学号*/
#include <stdio.h>
#include <string.h>

struct Student
{
    char id[20];
    char name[50];
    char gender;
};

int isSameStudent(struct Student s1, struct Student s2)
{
    return (strcmp(s1.name, s2.name) == 0 && s1.gender == s2.gender);
}

int main()
{
    int n, m;

    scanf("%d", &n);

    struct Student formA[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", formA[i].id);
        scanf("%s", formA[i].name);
        scanf(" %c", &formA[i].gender);
    }

    scanf("%d", &m);

    struct Student formB[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%s", formB[i].id);
        scanf("%s", formB[i].name);
        scanf(" %c", &formB[i].gender);
    }

    int deleteFlag[n];
    for (int i = 0; i < n; i++)
    {
        deleteFlag[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (isSameStudent(formA[i], formB[j]))
            {
                deleteFlag[i] = 1;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (deleteFlag[i] == 0)
        {
            printf("%s\n", formA[i].id);
        }
    }

    return 0;
}
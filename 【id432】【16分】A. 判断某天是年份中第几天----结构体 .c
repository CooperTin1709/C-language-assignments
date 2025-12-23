/*题目描述

定义一个结构体变量（包括年、月、日）。计算该日在本年中是第几天，注意闰年问题。

输入

年月日

输出

当年第几天*/
#include <stdio.h>
int n = 0; // 当年第n天
int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

typedef struct adate
{
    int year;
    int month;
    int day;
} date;

int isleap(date a)
{
    int y = a.year;
    return (((y % 4 == 0) && (y != 100)) || y % 400 == 0) ? 1 : 0;
}

int number_of_days(int a, date aa)
{
    int ret;
    if (a == 2 && isleap(aa))
    {
        ret = 29;
    }
    else
    {
        ret = days[a - 1];
    }
    return ret;
}

void calculating(date a)
{
    for (int i = 0; i < a.month; i++)
    {
        n += number_of_days(i, a);
    }
    n += a.day;
}

int main(void)
{
    date a;
    scanf("%d %d %d", &a.year, &a.month, &a.day);
    calculating(a);
    printf("%d", n);
    return 0;
}
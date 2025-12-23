/*题目描述

定义一个结构体，包含年月日，表示一个学生的出生日期。然后在一群学生的出生日期中找出谁的出生日期排行第二

要求：出生日期的存储必须使用结构体，不能使用其他类型的数据结构。

要求程序全过程对出生日期的输入、访问、输出都必须使用结构。

输入

第一行输入t表示有t个出生日期

每行输入三个整数，分别表示年、月、日

依次输入t个实例

输出

输出排行第二老的出生日期，按照年-月-日的格式输出*/
#include <stdio.h>
#include <stdlib.h>

typedef struct adate
{
    int year;
    int month;
    int day;
} date;


int is_older(date d1, date d2)
{
    if (d1.year < d2.year) return 1;
    if (d1.year > d2.year) return 0;
    
    if (d1.month < d2.month) return 1;
    if (d1.month > d2.month) return 0;
    
    if (d1.day < d2.day) return 1;
    return 0;
}

int main(void)
{
    int t = 0;
    scanf("%d", &t);
    date *dates = (date *)malloc(t * sizeof(date));
    
    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &dates[i].year, &dates[i].month, &dates[i].day);
    }
    
    date oldest = dates[0];
    date second_oldest = dates[1];
    
    if (!is_older(oldest, second_oldest)) {
        date temp = oldest;
        oldest = second_oldest;
        second_oldest = temp;
    }
    
    for (int i = 2; i < t; i++) {
        if (is_older(dates[i], oldest)) {
            second_oldest = oldest;
            oldest = dates[i];
        } else if (is_older(dates[i], second_oldest) && 
                    !is_older(dates[i], oldest)) {
            second_oldest = dates[i];
        }
    }
    
    printf("%04d-%d-%d\n", second_oldest.year, second_oldest.month, second_oldest.day);
    
    free(dates);
    return 0;
}
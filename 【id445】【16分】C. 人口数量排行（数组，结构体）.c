/*题目描述

2016年上半年全国31省市进行了人口统计数据。输入n，输入n个省及其人口统计数据，请输出人口数量排行榜（降序）。

注：不可使用系统自带sort函数。

输入

输入n

n行，每行数据为：省  人口数量（单位：万人）

输出

输出人口数量排行榜（降序）*/
#include <stdio.h>
#include <stdlib.h>

typedef struct boxx
{
    char id[11];
    float num;
} provinces;

int main(void)
{
    int t = 0;
    scanf("%d", &t);
    provinces *province = (provinces *)malloc(t * sizeof(provinces));
    for (int i = 0; i < t; i++)
    {
        scanf("%s %f", province[i].id, &province[i].num);
    }
    for (int j = 0; j < t - 1; j++)
    {
        for (int k = 0; k < t - 1 - j; k++)
        {
            if (province[k].num < province[k + 1].num)
            {
                provinces temp = province[k];
                province[k] = province[k + 1];
                province[k + 1] = temp;
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        printf("%s %g万人\n", province[i].id, province[i].num);
    }
    free(province);
    return 0;
}
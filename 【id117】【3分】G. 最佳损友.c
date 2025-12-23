/*题目描述

现在法外狂徒张三和李四捡到了n元。

现在他们要把这钱平均分成两份，如果分不均张三要拿多的那一部分

输入

一行输入一个整数n

输出

输出张三拿了多少钱
*/
#include <stdio.h>

int main(void)
{
    int n = 0, k = 0;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        k = n / 2;
    }
    else
    {
        k = (n + 1) / 2;
    }
    printf("%d", k);
    return 0;
}
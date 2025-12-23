/*题目描述

输入n，计算并输出n项阶乘的和

输入

n

输出

n项阶乘的和*/
#include <stdio.h>

long long Factorial(int k)
{
    long long ret = 1;
    for (long long i = 1; i <= k; i++)
    {
        ret *= i;
    }
    return ret;
}

int main(void)
{
    long long n, sum=0;
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += Factorial(i);
    }
    printf("%lld\n", sum);
    return 0;
}
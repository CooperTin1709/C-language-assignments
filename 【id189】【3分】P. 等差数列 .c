/*题目描述

sum=2+5+8+11+14+…，输入正整数n，求sum的前n项和。

输入
n
输出
sum
*/
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int sum = (3 * n * n + n) / 2;
    printf("%d\n", sum);
    return 0;
}
/*题目描述

水仙花数也被称为超完全数字不变数、自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数。
水仙花数是指一个 n 位数（n≥3 ），它的每个位上的数字的 n 次幂之和等于它本身：

153 = 1^3 + 5^3 + 3^3，算式中^3表示三次方运算，因为153是三位数，所以n次幂是3次幂运算

输入一个三位数，判定其是否水仙花数。

输入

一个三位数

输出

输出0或1，0表示不是水仙花数，1表示是水仙花数。*/
#include <stdio.h>
#include <math.h>

void judge_num(int n)
{
    int ret = 0, a, b, c;
    c = n % 10;
    b = (n / 10) % 10;
    a = n / 100;
    if (n == pow(a, 3) + pow(b, 3) + pow(c, 3))
    {
        ret = 1;
    }
    printf("%d", ret);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    judge_num(n);
    return 0;
}
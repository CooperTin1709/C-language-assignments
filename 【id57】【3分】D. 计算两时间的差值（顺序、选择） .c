/*题目描述

给定两个时间，计算两个时间的差值。

输入

给定的第一个时间一定比第二个时间大

输出*/
#include <stdio.h>

int main(void)
{
    int a1, b1, c1, a2, b2, c2, a, b, c;
    scanf("%d:%d:%d", &a1, &b1, &c1);
    scanf("%d:%d:%d", &a2, &b2, &c2);
    if (c1 >= c2)
        c = c1 - c2;
    else if (c1 < c2)
    {
        b1--;
        c = c1 + 60 - c2;
    }
    if (b1 >= b2)
        b = b1 - b2;
    else if (b1 < b2)
    {
        a1--;
        b = b1 + 60 - b2;
    }
    a = a1 - a2;
    printf("%d:%d:%d", a, b, c);
    return 0;
}
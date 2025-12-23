/*题目描述

输入三角形三条边的长度a、b、c，判断它们分别能构成什么形状的三角形：普通三角形、等边三角形、等腰三角形、等腰直角三角形。

（提示：判断两个浮点数a、b相等，可以使用fabs(a-b)<0.001 ）

输入

三条边的长度

输出

三角形类型的名称；如果不能构成三角形，就输出“非三角形”*/
#include <stdio.h>
#include <math.h>
float a, b, c;

int main(void)
{
    scanf("%f %f %f", &a, &b, &c);
    if ((a + b <= c || a + c <= b || b + c <= a) || a < 0 || b < 0 || c < 0)
    {
        printf("非三角形");
        return 0;
    }
    if (fabs(a - b) < 0.001 && fabs(b - c) < 0.001)
    {
        printf("等边三角形");
        return 0;
    }
    if (fabs(a - b) < 0.001 || fabs(b - c) < 0.001 || fabs(a - c) < 0.001)
    {
        if (fabs(pow(a, 2) + pow(b, 2) - pow(c, 2)) < 0.001 || fabs(pow(a, 2) + pow(c, 2) - pow(b, 2)) < 0.001 || fabs(pow(c, 2) + pow(b, 2) - pow(a, 2)) < 0.001)
        {
            printf("等腰直角三角形");
            return 0;
        }
        else
        {
            printf("等腰三角形");
            return 0;
        }
    }
    else
    {
        printf("普通三角形");
        return 0;
    }
}
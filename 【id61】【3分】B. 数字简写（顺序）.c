/*题目描述

数字1000087可以表示为10^6+87。（10^6表示10的6次方，注意C语言计算10的6次方不是10^6)。

输入x,y。计算10^x+y对应的数字。

测试数据中x,y取值范围为：x在3到10之间，y在0到100之间。

输入

正整数x 正整数y。

输出

10^x+y计算结果*/
#include <stdio.h>
#include <math.h>

long long calculate(int x, int y)
{
    long long ret = pow(10, x) + y;
    return ret;
}

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("10^%d+%d = %lld", x, y, calculate(x, y));
    return 0;
}
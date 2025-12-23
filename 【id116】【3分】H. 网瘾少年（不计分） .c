/*题目描述

现在王者荣耀升级了防沉迷系统，这可为难了我们小学生cj.

因为cj没有手机只能用妈妈的手机玩王者荣耀，但是妈妈每天心情都不一样，他每天能玩的时间段都不一样。

时间被描述为一个数轴（单位：min）

现在王者规定小学生能玩的时间段是[a,b]（一个区间）

妈妈给cj玩手机的时间段是[c,d]

已经知道打完一局王者平均时间是20min.

为了不坑队友如果剩余的时间少过20min,cj不会开下一局。

现在问你如果小明是否能开打王者，如果可以打他最多可以打多少局？

输入

一行输入4个整数a,b,c,d

输入保证a<=b

输入保证c<=d

输出

如果不能打输出”good good study day day up“

如果可以打输出局数。*/
#include <stdio.h>

int main(void)
{
    int a, b, c, d, time = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int start = (a < c) ? c : a, stop = (b < d) ? b : d;
    time = stop - start;
    time >= 20 ? printf("%d", (time / 20)) : printf("good good study day day up");
    return 0;
}
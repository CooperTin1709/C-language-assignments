/*题目描述

用三元组(r,g,b)表示RBG颜色值的一种颜色，其中r、g、b分别为该颜色的R 值、G 值、B 值，0≤r,g,b≤255且皆为十进制整数。

对于颜色(r,g,b)，定义其反色的 RGB 颜色值为(255-r,255-g,255-b)。

r、g、b常用两位十六进制表示（00~FF）。输入r、g、b的十六进制表示，输出其反色的十六进制颜色码。

例如：白色的RGB值为(255,255,255)，其反色为黑色，RGB值为（0，0，0）。255的十六进制为FF。因此输入FF FF FF，输出000000。

输入

三个两位十六进制，分别表示r，g，b颜色值。输入数据保证是合法的颜色值。

输出

三个两位十六进制，分别是反色的ｒ，ｇ，ｂ值
*/
#include <stdio.h>
int fanse(int x)
{
    int ret = 255 - x;
    return ret;
}

int main(void)
{
    int r, g, b;
    scanf("%x %x %x", &r, &g, &b);
    printf("%.2X%.2X%.2X", fanse(r), fanse(g), fanse(b));
    return 0;
}

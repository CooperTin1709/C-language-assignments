/*题目描述

输入一个大写字母，输出其对应的小写字母。例如输入 E，输出 e。

输入

一个大写字母（A~Z)

输出

对应的小写字母*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char x;
    scanf("%c", &x);
    printf("%c", tolower(x));
}
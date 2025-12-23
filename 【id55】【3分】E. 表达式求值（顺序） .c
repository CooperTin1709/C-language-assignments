/*题目描述

对以下表达式进行求值，a、b、c是三个变量，它们都是小于100的自然数。

a+b>c&&b==c

注：求值结果用%d输出。

对比该题的输出，看教材P109 5.2 理解关系运算符、逻辑运算符。

输入

第一行输入T，表示后续有T个测试示例

第二行开始，每行输入3个变量值，输入T行

输出

每行输出计算结果*/
#include <stdio.h>

int main(void)
{
    int t = 0;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        printf("%d\n", a + b > c && b == c);
    }
    return 0;
}

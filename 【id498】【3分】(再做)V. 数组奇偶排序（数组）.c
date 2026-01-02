/*题目描述
输入n，输入n个整数。调整数字位置使得偶数在序列的前半部分，奇数在序列的后半部分。
注：自己根据样例输入、输出找到算法。

输入
测试次数t
每组测试数据格式如下：
整数个数n，后跟n个整数

输出
对每组测试数据，输出整数个数和调整后的整数序列*/

#include <stdio.h>
int even, odd;

void my_sort(int a, int odds[], int evens[])
{
    if (a % 2 == 0)
    {
        evens[even++] = a;
    }
    else
    {
        odds[odd++] = a;
    }
}

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        even = 0, odd = 0;
        int odds[100], evens[100];
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            int temp;
            scanf("%d", &temp);
            my_sort(temp, odds, evens);
        }
        printf("%d ", n);
        for (int i = 0; i < even; i++)
        {
            printf("%d ", evens[i]);
        }
        for (int i = 0; i < odd; i++)
        {
            printf("%d", odds[i]);
            if (i != odd - 1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
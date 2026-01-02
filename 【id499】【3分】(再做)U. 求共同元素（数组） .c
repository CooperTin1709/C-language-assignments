/*题目描述
输入三个数组，求三个数组中的共同元素。

输入
测试次数t
每组测试数据三行，分别为三个数组的数据，格式如下：
数组大小n(n<=10)，后跟n个数据

输出
输出每组测试数据的共同元素个数和共同元素（升序顺序输出）
如果没有，仅输出0*/
#include <stdio.h>

void my_input(int a[], int *n)
{
    scanf("%d", &(*n));
    for (int i = 0; i < *n; i++)
    {
        scanf("%d", &a[i]);
    }
}

int have_num(int num, int a[], int n)
{
    int ret = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            ret = 1;
            break;
        }
    }
    return ret;
}

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a[11], b[11], c[11], same[11];
        int n1, n2, n3, cnt = 0;
        my_input(a, &n1);
        my_input(b, &n2);
        my_input(c, &n3);
        for (int i = 0; i < n1; i++)
        {
            if (have_num(a[i], b, n2) && have_num(a[i], c, n3) && !have_num(a[i], same, cnt))
            {
                same[cnt++] = a[i];
            }
        }
        if (cnt == 0)
        {
            printf("0:\n");
        }
        else
        {
            printf("%d:", cnt);
            for (int j = 0; j < cnt - 1; j++)
            {
                for (int k = 0; k < cnt - 1 - j; k++)
                {
                    if (same[k] > same[k + 1])
                    {
                        int temp = same[k];
                        same[k] = same[k + 1];
                        same[k + 1] = temp;
                    }
                }
            }
            for (int i = 0; i < cnt; i++)
            {
                printf("%d", same[i]);
                if (i != cnt - 1)
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
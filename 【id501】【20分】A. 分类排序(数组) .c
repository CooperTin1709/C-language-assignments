#include <stdio.h>
#define NUM 10

int sort1(int num[10], int count);

int main()
{
    int t;
    for (int i = 0; i < t; i++)
    {
        int num[NUM];
        for (int k = 0; k < NUM; k++)
        {
            scanf("%d", &num[k]);
        }
        int a;
        scanf("%d", &a);
        if (a % 2 != 0)
        {
            for (int k = 0; k < NUM; k++)
            {
                if (a == num[k])
                {
                }
            }
        }
    }
    return 0;
}

int sort1(int count, int a[9])
{
    int a[9], b[9], j, t1, t2, i;
    for (int k = 0; k < 9 - 1; k++)
    { // 比较的轮次,共比较NUM-1轮
        for (j = 0; j < 9 - k; j++)
        {
            if (a[j] < a[j + 1])
            {
                t1 = a[j]; // 交换数字
                a[j] = a[j + 1];
                a[j + 1] = t1;
                t2 = b[j]; // 同时交换下标
                b[j] = b[j + 1];
                b[j + 1] = t2;
            }
        }
    }
    return a[9];
}
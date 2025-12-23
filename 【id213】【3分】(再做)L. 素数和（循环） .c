/*题目描述

输入数字范围n,m（n>=0, m>=0, n<=m)，输出[n,m]区间中的所有素数和。

输入

测试次数T

每组测试数据一行，数字范围n m

输出

对每组测试数据，如果有素数，输出二行：

第一行：输出[n,m]间的素数

第二行：输出[n,m]间的素数和

如果没有素数，输出NO*/
#include <stdio.h>

int m, n;
int a[1000];
int isprime(int k)
{
    if (k <= 1)
    {
        return 0;
    }
    int ret = 1;
    for (int i = 2; i < k; i++)
    {
        if (k % i == 0)
        {
            ret = 0;
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
        int a[1000] = {0};
        int num = 0;
        scanf("%d %d", &n, &m);
        for (int i = n; i <= m; i++)
        {
            if (isprime(i))
            {
                a[num] = i;
                num++;
            }
        }
        if (num == 0)
        {
            printf("NO\n");
        }
        else
        {
            int sum = 0;
            for (int i = 0; i < num; i++)
            {
                printf("%d ", a[i]);
                sum += a[i];
            }
            printf("\n");
            printf("%d\n", sum);
        }
    }
    return 0;
}
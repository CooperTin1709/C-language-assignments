/*题目描述

小王是公司的仓库管理员，一天，他接到了这样一个任务：从仓库中找出一根钢管。这听起来不算什么，但是这根钢管的要求可真是让他犯难了，要求如下：
1、这根钢管一定要是仓库中最长的；
2、这根钢管一定要是最长的钢管中最细的；
3、这根钢管一定要是符合前两条的钢管中编码最大的（每根钢管都有一个互不相同的编码，越大表示生产日期越近）。
相关的资料到是有，可是，手工从几百份钢管材料中选出符合要求的那根……
要不，还是请你编写个程序来帮他解决这个问题吧。

输入

第一行是一个整数N(N<=10)表示测试数据的组数）
每组测试数据的第一行 有一个整数m(m<=10000)，表示仓库中所有钢管的数量，
之后m行，每行三个整数，分别表示一根钢管的长度（以毫米为单位）、直径（以毫米为单位）和编码（一个9位整数）。

输出

对应每组测试数据的输出只有一个9位整数，表示选出的那根钢管的编码，
每个输出占一行*/
#include <stdio.h>

int main(void)
{
    int t = 0;
    scanf("%d", &t);
    while (t--)
    {
        int n = 0;
        long long best_len = -1, best_dia = 1e15, best_id = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            long long len, dia, id;
            scanf("%lld %lld %lld", &len, &dia, &id);
            if (len < best_len)
            {
                continue;
            }
            else if (len > best_len)
            {
                best_len = len;
                best_dia = dia;
                best_id = id;
            }
            else
            {
                if (dia > best_dia)
                {
                    continue;
                }
                else if (dia < best_dia)
                {
                    best_dia = dia;
                    best_id = id;
                }
                else
                {
                    if (id < best_id)
                    {
                        continue;
                    }
                    else
                    {
                        best_id = id;
                    }
                }
            }
        }
        printf("%lld\n", best_id);
    }
    return 0;
}
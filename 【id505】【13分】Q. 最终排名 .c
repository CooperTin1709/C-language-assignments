/*题目描述

第n届深圳大学ACM网络编程擂台赛比赛完后需要产生一个最终排名，排名按照题数多少来决定。
但是有太多的队伍参与，手动计算排名已经不能满足比赛的需求。
现在有一份名单记录各个队伍的ID和做出的题目数，需要你写一个程序，产生最终的排名。

为了简化题目，这里的排名规则为：做出题目数量多的队伍排在前面，
如果题数相等，保持输入时的相对顺序不要改变。

输入

第一行包含一个正整数T( 1 ≤ T ≤ 15),表示有T组测试数据。每组数据第一行有一个正整数N（1<N ≤ 10000）,表示队伍数量。接下来N 行包含两个整数，1 ≤ ID ≤ 10^7, 0 ≤ M ≤ 100。ID为队伍的编号，M为做出的题数。

输出

每组数据输出包含N行，第i行有两个整数，ID和M表示排在第i位的队伍的ID和做出的题数。*/
#include <stdio.h>

typedef struct datas
{
    int id;
    int num;
} data;

void swap(data *a, data *b)
{
    data temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int t = 0;
    scanf("%d", &t);
    while (t--)
    {
        int n = 0;
        scanf("%d", &n);
        data list_a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &list_a[i].id, &list_a[i].num);
        }
        for (int j = 0; j < n - 1; j++)
        {
            for (int k = 0; k < n - 1 - j; k++)
            {
                if (list_a[k].num < list_a[k + 1].num)
                {
                    swap(&list_a[k], &list_a[k + 1]);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d %d\n", list_a[i].id, list_a[i].num);
        }
    }
    return 0;
}
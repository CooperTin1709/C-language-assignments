/*题目描述
一个N*N矩阵中有不同的正整数，经过这个格子，就能获得相应价值的奖励，
从左上走到右下，只能向下向右走，求能够获得的最大价值。
例如：3 * 3的方格。
1 3 3
2 1 3
2 2 1
能够获得的最大价值为：11。
提示：定义f(x,y)为从左上角（0，0）走到第x行第y列获得的最大价值。
找出f(x,y)与f(x-1,y)和f(x,y-1)之间的关系。

输入
第1行：N，N为矩阵的大小。(2 <= N <= 500)
第2 - N + 1行：每行N个数，中间用空格隔开，对应格子中奖励的价值。（1 <= N[i] <= 10000)

输出
输出能够获得的最大价值。*/
    #include <stdio.h>

    int max(int a, int b)
    {
        return (a >= b) ? a : b;
    }

    int main(void)
    {
        int n = 0;
        scanf("%d", &n);
        int a[n][n], b[n][n]; // hang lie
        for (int i = 0; i < n; i++)
        {
            for (int k = 0; k < n; k++)
            {
                scanf("%d", &a[i][k]);
                b[i][k] = a[i][k];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int k = 0; k < n; k++)
            {
                if (i == 0 && k == 0)
                    continue;
                else if (i == 0)
                    b[i][k] += b[i][k - 1];
                else if (k == 0)
                    b[i][k] += b[i - 1][k];
                else
                    b[i][k] += max(b[i - 1][k], b[i][k - 1]);
            }
        }
        printf("%d\n", b[n - 1][n - 1]);
        return 0;
    }
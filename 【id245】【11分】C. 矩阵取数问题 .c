#include <stdio.h>
int max(int a, int b)
{
    int max;
    if (a > b)
        max = a;
    else
        max = b;
    return max;
}

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    int a[501][501];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int sum[501][501];
    for (int k = 0; k < n; k++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[k][j] = max(sum[k - 1][j], sum[k][j - 1]) + a[k][j];
        }
    }
    printf("%d", sum[n - 1][n - 1]);
    return 0;
}
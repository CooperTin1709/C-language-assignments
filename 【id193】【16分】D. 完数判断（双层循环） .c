#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n, sum = 0, num = 0;
        int factor[1000];
        scanf("%d", &n);
        for (int i2 = 1; i2 < n; i2++)
        {
            if (n % i2 == 0)
            {
                sum += i2;
                factor[num++] = i2;
            }
        }
        if (sum == n)
            printf("yes");
        else
            printf("no");
        for (int i3 = 0; i3 < num; i3++)
        {
            printf(",%d", factor[i3]);
            if (i3 == num - 1)
                printf("\n");
        }
    }
    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int m, n, sum = 0;
        int have = 0;

        scanf("%d %d", &n, &m);

        for (int x = n; x <= m; x++)
        {
            if (x <= 1)
                continue;
            int isPrime = 1;

            for (int y = 2; y * y <= x; y++)
            {
                if (x % y == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime)
            {
                printf("%d ", x);
                sum += x;
                have = 1;
            }
        }
        if (!have)
        {
            printf("NO\n");
        }
        else
        {
            printf("\n%d\n", sum);
        }
    }

    return 0;
}
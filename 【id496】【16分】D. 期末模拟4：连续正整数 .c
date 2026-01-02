#include <stdio.h>

int main(void)
{
    int m;
    scanf("%d", &m);
    int sus = 0;
    for (int i = 1; i < (m / 2) + 1; i++)
    {
        int sum = i;
        int n = 1;
        while (1)
        {
            if (sum == m)
            {
                for (int k = 0; k < n; k++)
                {
                    printf("%d", i + k);
                    if (k != n - 1)
                    {
                        printf(" ");
                    }
                }
                printf("\n");
                sus++;
                break;
            }
            else if (sum > m)
            {
                break;
            }
            else
            {
                sum += i + n;
                n++;
            }
        }
    }
    if (sus == 0)
    {
        printf("NULL\n");
    }
    return 0;
}
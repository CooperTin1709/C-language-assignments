#include <stdio.h>

int main(void)
{
    int t, sum = 0;
    scanf("%d", &t);
    for (int k = 1; k <= t; k++)
    {
        int sum1 = 1;
        for (int j = 1; j <= k; j++)
        {
            sum1 *= j;
        }
        sum += sum1;
    }
    printf("%d", sum);
    return 0;
}
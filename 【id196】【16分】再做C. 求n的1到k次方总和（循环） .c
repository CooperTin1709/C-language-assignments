#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n, k, sum = 0;
        scanf("%d %d", &n, &k);
        for (int i2 = 1; i2 <= k; i2++)
        {
            sum += pow(n, i2);
        }
        printf("%d\n", sum);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int n, sum = 0, w = 1;
    scanf_s("%d", &n);
    if (n == 0)
        w = 1;
    else
        for (int i1 = 1; i1 <= n; i1++)
        {
            w = 1;
            for (int i2 = 1; i2 <= i1; i2++)
            {
                w *= i2;
            }
            sum += w;
        }
    printf("%d", sum);
    return 0;
}
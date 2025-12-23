#include <stdio.h>

int gcd(int a, int b)
{
    // gcd=The greatest common divisor
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

int lcm(int a, int b)
{
    // lcm=Least common multiple
    int ret = (a * b) / gcd(a, b);
    return ret;
}

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int k = 0; k < t; k++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d %d\n", gcd(a, b), lcm(a, b));
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>

int turn(char *a, int *is_ok)
{
    int ret = 0;
    int len = strlen(a);
    for (int k = len - 1; k >= 0; k--)
    {
        if (a[k] >= '0' && a[k] <= '9')
        {
            ret += (a[k] - '0') * pow(16, len - k - 1);
        }
        else if (a[k] >= 'A' && a[k] <= 'F')
        {
            ret += (a[k] - 'A' + 10) * pow(16, len - k - 1);
        }
        else
        {
            *is_ok = 0;
            break;
        }
    }
    return ret;
}

int main(void)
{
    int t = 0;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        char Hexadecimal1[6], Hexadecimal2[6];
        int judge1 = 1, judge2 = 1;
        scanf("%s %s", Hexadecimal1, Hexadecimal2);
        int num1 = turn(Hexadecimal1, &judge1);
        int num2 = turn(Hexadecimal2, &judge2);
        if (judge1 && judge2)
        {
            printf("%d\n", num1 + num2);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
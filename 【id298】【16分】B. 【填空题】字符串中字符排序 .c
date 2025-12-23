#include <stdio.h>
int main()
{
    char a[100], c, min1, min2, max;
    int i = 0, k, n = 0;
    while ((c = getchar()) != EOF)
    /********** Write your code here! **********/
    {
        a[i] = c;
        i++;
        while (1)
        {
            char nc = getchar();
            if (nc == '\n' || nc == EOF)
            {
                break;
            }
            a[i++] = nc;
        }
        for (int j = 0; j < i - 1; j++)
        {
            for (int k = 0; k < i - 1 - j; k++)
            {
                if (a[k] > a[k + 1])
                {
                    char temp = a[k];
                    a[k] = a[k + 1];
                    a[k + 1] = temp;
                }
            }
        }
        if (i > 0)
        {
            printf("%c", a[0]);
            for (int j = 1; j < i; j++)
            {
                if (a[j] != a[j - 1])
                {
                    printf("%c", a[j]);
                }
            }
        }
        break;
    }
    /*******************************************/
    printf("\n");
    return 0;
}
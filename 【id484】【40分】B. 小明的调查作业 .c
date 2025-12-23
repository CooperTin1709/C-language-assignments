#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[1000], b[1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int check = 0;
        for (int k = 0; k < count; k++)
        {
            if (b[k] == a[i])
                break;
            else
                check += 1;
        }
        if (check == count)
        {
            b[count] = a[i];
            count += 1;
        }
    }

    for (int j = 0; j < count - 1; j++)
    {
        for (int k = 0; k < count - 1 - j; k++)
        {
            if (b[k] > b[k + 1])
            {
                int temp = 0;
                temp = b[k];
                b[k] = b[k + 1];
                b[k + 1] = temp;
            }
        }
    }
    printf("%d\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("%d", b[i]);
        if (i != count - 1)
            printf(" ");
        else
            printf("\n");
    }

    return 0;
}
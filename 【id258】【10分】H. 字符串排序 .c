#include <stdio.h>
#include <string.h>

void paixu(char *a[])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (strcmp(a[j], a[j + 1]) > 0)
            {
                char *temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    char input[3][1000];
    char *str[3];
    for (int k = 0; k < 3; k++)
    {
        scanf("%s", input[k]);
        str[k] = input[k];
    }
    paixu(str);
    for (int i = 0; i < 3; i++)
    {
        puts(str[i]);
    }
    return 0;
}
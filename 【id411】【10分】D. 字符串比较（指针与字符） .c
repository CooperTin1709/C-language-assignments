#include <stdio.h>
#include <string.h>
#define MAX_LEN 100

int my_compare(char *a, char *b)
{
    int ret;
    if (strlen(a) > strlen(b))
        ret = 1;
    else if (strlen(a) < strlen(b))
        ret = -1;
    else
    {
        int na = 0, nb = 0;
        while (*a != '\0')
        {
            if (*a > *b)
                na++;
            else if (*a < *b)
                nb++;
            b++;
            a++;
        }
        if (na == nb)
            ret = 0;
        else
            ret = (na > nb) ? 1 : -1;
    }
    return ret;
}

int main(void)
{
    int t = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char a[MAX_LEN];
        char b[MAX_LEN];
        scanf("%s", a);
        scanf("%s", b);
        printf("%d\n", my_compare(a, b));
    }
    return 0;
}
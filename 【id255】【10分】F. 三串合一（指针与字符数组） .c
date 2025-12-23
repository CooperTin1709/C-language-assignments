#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t = 0;
    scanf("%d", &t);
    while (t--)
    {
        char a[11], b[11], c[11];
        char *m;
        scanf("%s %s %s", a, b, c);
        int a1, a2, b1, b2, c1, c2;
        scanf("%d %d", &a1, &a2);
        scanf("%d %d", &b1, &b2);
        scanf("%d %d", &c1, &c2);
        m = (char *)malloc((a2 - a1 + b2 - b1 + c2 - c1 + 4) * sizeof(char));
        char *p = a, *start = m;
        p += a1 - 1;
        for (int i = 0; i <= a2 - a1; i++)
        {
            *m = *p;
            m++;
            p++;
        }
        p = b;
        p += b1 - 1;
        for (int i = 0; i <= b2 - b1; i++)
        {
            *m = *p;
            m++;
            p++;
        }
        p = c;
        p += c1 - 1;
        for (int i = 0; i <= c2 - c1; i++)
        {
            *m = *p;
            m++;
            p++;
        }
        *m = '\0';
        printf("%s\n", start);
        free(start);
    }

    return 0;
}
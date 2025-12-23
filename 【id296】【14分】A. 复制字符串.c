#include <stdio.h>

char *mycpy(char *s1, const char *s2)
{
    char *ret = s1;
    while ((*s1 = *s2) != '\0')
    {
        s1++;
        s2++;
    }
    *s1 = '\0';
    return ret;
}

int main(void)
{
    int t = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s1[20], s2[20];
        scanf("%s", s1);
        scanf("%s", s2);
        printf("%s\n", mycpy(s1, s2));
    }
    return 0;
}
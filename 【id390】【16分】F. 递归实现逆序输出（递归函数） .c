#include <stdio.h>

void reverse_print(char *s)
{
    if (*s == '\0')
    {
        return;
    }
    reverse_print(s + 1);
    printf("%c", *s);
}

int main(void)
{
    char s[1000];
    int t = 0;
    scanf("%d", &t);
    scanf("%s", s); 
    reverse_print(s);
    printf("\n");
    return 0;
}
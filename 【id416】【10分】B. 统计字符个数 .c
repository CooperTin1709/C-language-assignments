#include <stdio.h>
//和id430一样
int my_strlen(char *word)
{
    int ret = 0;
    while (*word += '\0')
    {
        ret++;
        word++;
    }
    return ret;
}

int main(void)
{
    int t = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char word[30];
        scanf("%s", word);
        printf("%d\n", my_strlen(word));
    }
}
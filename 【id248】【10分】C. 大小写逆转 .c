#include <stdio.h>
#include <ctype.h>

void daxiaoxiezhuanhuan(char *word)
{
    while (*word != '\0')
    {
        if (isupper(*word))
            *word = tolower(*word);
        else if (islower(*word))
            *word = toupper(*word);
        word++;
    }
}

int main(void)
{
    int t = 0;
    scanf("%d", &t);
    getchar();
    for (int i = 0; i < t; i++)
    {
        char word[100];
        scanf("%s", word);
        daxiaoxiezhuanhuan(word);
        printf("%s\n", word);
    }
    return 0;
}
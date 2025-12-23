#include <stdio.h>
#include <ctype.h>

void encrypt(char *a)
{
    while (*a != '\0')
    {
        if (isalpha(*a))
        {
            if ((*a >= 'W') && (*a <= 'Z'))
            {
                *a = 'A' + (3 - 'Z' + *a);
            }
            else if ((*a >= 'w') && (*a <= 'z'))
            {
                *a = 'a' + (3 - 'z' + *a);
            }
            else
                *a = *a + 4;
        }
        a++;
    }
}

int main(void)
{
    int t = 0;
    scanf("%d", &t);
    while (t--)
    {
        char word[31];
        scanf("%s", word);
        encrypt(word);
        printf("%s\n", word);
    }
    return 0;
}
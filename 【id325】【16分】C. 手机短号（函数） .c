#include <stdio.h>
#include <string.h>
const char *title[] = {"133", "153", "180", "181", "189",
                        "130", "131", "132", "155", "156",
                        "134", "135", "136", "137", "138",
                        "182", "183", "184"};

int judge_num(char *num)
{
    int ret = 0;
    for (int i = 0; i < 11; i++)
    {
        if (num[i] < '0' || num[i] > '9')
        {
            return 0;
        }
    }
    if (strlen(num) != 11)
    {
        ret = 0;
    }
    else
    {
        char t[4];
        for (int i = 0; i < 3; i++)
        {
            t[i] = num[i];
        }
        t[3] = '\0';
        for (int i = 0; i < 18; i++)
        {
            if (strcmp(t, title[i]) == 0)
            {
                ret = 1;
                break;
            }
            else
            {
                ret = 0;
            }
        }
    }
    return ret;
}

int main(void)
{
    int t = 0;
    scanf("%d", &t);
    while (t--)
    {
        char num[20];
        scanf("%s", num);
        if (judge_num(num))
        {
            char short_num[7];
            short_num[0] = '6';
            for (int k = 1; k <= 5; k++)
            {
                short_num[k] = num[6 + k - 1];
            }
            short_num[6] = '\0';
            printf("%s\n", short_num);
        }
        else
        {
            printf("error\n");
        }
    }
    return 0;
}

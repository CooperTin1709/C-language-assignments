/*题目描述

输入一行字符串，该字符串只由小写英文字母a-z组成，且其中的字符可以重复，最长不超过10000个字符。
从该字符串中按顺序挑选出若干字符（不一定相邻）组成一个新串，称为"子串"。如果子串中每两个相邻的字符或者相等，或者后一个比前一个大，则称为"升序子串"。编程求出输入字符串的最长升序子串的长度。
例如，由输入字符串abdbch可以构成的升序子串有：abd、abch、bbch、abbch等。其中最长的升序子串是abbch，其长度为5。

输入

输入一行字符串，该串不含空格，以回车符结束。

输出

输出一个正整数，是字符串中最长的升序子串的长度，在行末要输出一个回车符。*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    int len;
    char a[10009];
    scanf("%s", a);
    len = strlen(a);
    int dp[10009] = {1};
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] <= a[i] && dp[j] + 1 > dp[i])
            {
                dp[i] = dp[j] + 1;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < len; i++)
    {
        if (dp[i] > ans)
        {
            ans = dp[i];
        }
    }
    printf("%d\n", ans);
    return 0;
}
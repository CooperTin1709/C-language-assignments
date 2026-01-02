/*题目描述
从键盘输入10个整数（10个整数均不相同）， 然后再从键盘中输入一个整数a，

如果该整数a为奇数， 且与这10个整数中的任一个数相同，则删掉与a相同的
这个数，并将剩下的9个数按升序排序输出；

若a为偶数， 且与这10个数都不同，则加入a，并将这11个数降序排 序输出；

否则，则将这10个数奇数在前，偶数在后， 降序排列输出。

例如，10个数分别为6，89，34，12， 0，-8，78，15，9，3.

若a为9，则输出为：-8，0，3， 6，12，15，34，78，89.

若a为2，则输出为：89，78， 34，15，12，9，6，3，2，0，-8.

若a为7或者12，则 输出为：89，15，9，3，78，34，12，6，0，-8.

输入
测试数据的组数n 第一组测试数据的10个整数 第一组的整数a
第二组测试数据的10个整数 第二组的整数a ...... 第n组测试数据的10个整数 第n组的整数a

输出
第一组数据排序输出 第二组数据排序输出 ....... 第n组数据排序输出*/
#include <stdio.h>
int evens = 0, odds = 0;

int scann(int a, int t[]) // 如果有相同的，返回1，否则返回0
{
    int ret = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a == t[i])
        {
            ret = 1;
            break;
        }
    }
    return ret;
}

void myput(int a, int even[], int odd[])
{
    if (a % 2 == 0)
    {
        even[evens++] = a;
    }
    else
    {
        odd[odds++] = a;
    }
}

void jiangxu_sort(int n, int nn[])
{
    for (int j = 0; j < n - 1; j++)
    {
        for (int k = 0; k < n - 1 - j; k++)
        {
            if (nn[k] < nn[k + 1])
            {
                int temp = nn[k];
                nn[k] = nn[k + 1];
                nn[k + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", nn[i]);
        if (i != n - 1)
            printf(" ");
    }
}

int main(void)
{
    int num = 0;
    scanf("%d", &num);
    while (num--)
    {
        int t[11], even[11], odd[11];
        evens = 0, odds = 0;
        for (int i = 0; i < 10; i++)
        {
            scanf("%d",&t[i]);
            myput(t[i], even, odd);
        }
        int a;
        scanf("%d", &a);
        if (a % 2 == 0 && !scann(a, t))
        {
            myput(a, even, odd);
            jiangxu_sort(11, t);
            printf("\n");
        }
        else if (a % 2 != 0 && scann(a, t))
        {
            int new[10];
            int news = 0, cnt = 0;
            while (news != 9)
            {
                if (t[cnt] != a)
                {
                    new[news++] = t[cnt++];
                }
            }
            for (int j = 0; j < 8; j++)
            {
                for (int k = 0; k < 8 - j; k++)
                {
                    if (new[k] > new[k + 1])
                    {
                        int temp = new[k];
                        new[k] = new[k + 1];
                        new[k + 1] = temp;
                    }
                }
            }
            for (int i = 0; i < 9; i++)
            {
                printf("%d", new[i]);
                if (i != 8)
                    printf(" ");
            }
            printf("\n");
        }
        else
        {
            jiangxu_sort(odds, odd);
            printf(" ");
            jiangxu_sort(evens, even);
            printf("\n");
        }
    }
    return 0;
}

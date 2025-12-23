#include <stdio.h>
int a[100], finding[100] = {0};
int n = 0, k = 0;

int search(int x, int sum)
{
    if (sum == k)
    {
        return 1;
    }
    if (sum > k || x == n)
    {
        return 0;
    }
    if (search(x + 1, sum))
    {
        return 1;
    }
    if (search(x + 1, sum + a[x]))
    {
        finding[x] = 1;
        return 1;
    }
    return 0;
}

int main(void)
{
    int t = 0;
    scanf("%d", &t);
    while (t--)
    {
        for (int i = 0; i < n; i++){
            finding[i] = 0;
        }
        scanf("%d %d", &n, &k);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        if (search(0, 0))
        {
            printf("YES\n");
            for (int i = 0; i < n; i++)
            {
                if(finding[i]){
                    printf("%d", a[i]);
                    if (i != n - 1)
                    {
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
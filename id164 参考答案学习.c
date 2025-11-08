//题目描述:现在输入一个正整数k,找到所有的正整数x>=y,使得1/k=1/x+1/y.
//第一行输入一个整数n,代表有n组测试数据。接下来n行每行输入一个正整数k
//输出：按顺序输出对应每行的k找到所有满足条件1/k=1/x+1/y的组合

#include <stdio.h>

int main(void) {
    int T;
    if (scanf("%d", &T) != 1) return 0;
    while (T--) {
        long long k;
        if (scanf("%lld", &k) != 1) break;
        long long kk = k * k; // k^2
        for (long long d = 1; d <= k; ++d) {
            if (kk % d == 0) {
                long long y = d + k;           // b=d
                long long x = (kk / d) + k;    // a=kk/d
                printf("1/%lld=1/%lld+1/%lld\n", k, x, y);
            }
        }
    }
    return 0;
}
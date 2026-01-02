#include<stdio.h>
int main(void){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        long long n,sum=0;
        scanf("%lld",&n);
        long long n5=n/5,n7=n/7;
        sum+=((5*n5+5*n5*n5)/2)+((7*n7+7*n7*n7)/2);
        if(n>=35){
            long long k=n/35;
            sum-=((35*k+35*k*k)/2);
        }
        printf("%lld\n",sum);
    }

    return 0;
}
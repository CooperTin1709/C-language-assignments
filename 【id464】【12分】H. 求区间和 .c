#include<stdio.h>

int main(){
    int n,l,r,sum=0;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&l);
    scanf("%d",&r);
    for(;l<=r;l++){
        sum+=a[l-1];
    }
    printf("%d",sum);
    return 0;
}
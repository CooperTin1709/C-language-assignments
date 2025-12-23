#include<stdio.h>
#include<stdlib.h>

float Average(int len,int a[]){
    float sum=0;
    for(int i=0;i<len;i++){
        sum+=a[i];
    }
    return (sum/len);
}

int main(void){
    int n=0;
    scanf("%d",&n);
    int *a;
    a = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%.2f",Average(n,a));
    free(a);
    return 0;
}
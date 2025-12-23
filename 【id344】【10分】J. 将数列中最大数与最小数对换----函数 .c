#include<stdio.h>

void swich(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

void input(int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}

void deal(int a[],int n){
    int *min=&a[0],*max=&a[0];
    for(int i=1;i<n;i++){
        if(a[i]<*min) min=&a[i];
        if(a[i]>*max) max=&a[i];
    }
    swich(&a[0],min);
    if(max==&a[0]) max=min;
    swich(&a[n-1],max);
}

void output(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

int main(void){
    int const n=10;
    int a[n];
    input(a,n);
    deal(a,n);
    output(a,n);
    return 0;
}
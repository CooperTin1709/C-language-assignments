#include<stdio.h>

int main(){
int a[11],b[11];
char c[11],d[11];
int t=0;
scanf("%d",&t);
for(int i=0;i<t;i++){
    scanf("%d %s %s %d",&a[i],c[i],d[i],&b[i]);
}
int del=0;
scanf("%d",&del);
for(int i=0;i<t;i++){
    if(b[i]!=del){
        printf("%d %s %s %d\n",a[i],c[i],d[i],b[i]);
    }
}

    return 0;
}
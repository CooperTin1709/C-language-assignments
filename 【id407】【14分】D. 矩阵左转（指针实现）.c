#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int a[2][3];
        scanf("%d %d %d",&a[0][0],&a[0][1],&a[0][2]);
        scanf("%d %d %d",&a[1][0],&a[1][1],&a[1][2]);
        int*p=&a[0][0];
        printf("%d %d \n",*(p+2),*(p+5));
        printf("%d %d \n",*(p+1),*(p+4));
        printf("%d %d \n",*(p+0),*(p+3));
    }
    return 0;
}
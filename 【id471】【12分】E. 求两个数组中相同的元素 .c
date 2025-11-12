#include<stdio.h>

int main(){
    int a[6],b[8],c[6];
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    for(int i1=0;i1<8;i1++){
        scanf("%d",&b[i1]);
    }
    int count=0;
    for(int p=0;p<6;p++){
        for(int q=0;q<8;q++){
            if(a[p]==b[q]){
                c[count]=a[p];
                count++;
            }
        }
    }
    for(int m=0;m<count;m++){
        printf("%d\n",c[m]);
    }
    return 0;
}
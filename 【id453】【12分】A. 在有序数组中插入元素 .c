#include<stdio.h>

int main(){
    int a[10];
    for(int i=1;i<=9;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&a[0]);
    for(int p=0;p<9;p++){
        for(int q=0;q<9-p;q++){
            if(a[q]>a[q+1]){
                int temp=0;
                temp=a[q];
                a[q]=a[q+1];
                a[q+1]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
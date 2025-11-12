#include<stdio.h>

int main(){
    int a[20],b[20];
    for(int i=0;i<20;i++){
        scanf("%d",&a[i]);
    }
    int count=0;
    for(int p=0;p<20;p++){
        for(int q=0;q<20;q++){
            if(p==q){
                continue;
            }
            if((a[p]%a[q])==0){
                b[count]=a[p];
                count++;
                break;
            }
        }
    }
    for(int k=0;k<count;k++){
        printf("%d\n",b[k]);
    }
    return 0;
}
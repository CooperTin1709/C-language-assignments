#include<stdio.h>

int main(){
    float a[10];
    float sum;
    int count=0;
    for(int i=0;i<10;i++){
        scanf("%f",&a[i]);
        sum+=a[i];
    }
    float avg=sum/10;
    for(int k=0;k<10;k++){
        if(a[k]>avg){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}
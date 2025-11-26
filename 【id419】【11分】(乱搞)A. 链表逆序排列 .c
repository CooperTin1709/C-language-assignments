#include<stdio.h>

int main(){
    int a[99999];
    int count=0;
    while(1){
        int t=0;
        scanf("%d",&t);
        if (t==0) break;
        else{
            a[count]=t;
            count+=1;
        } 
    }
    printf("The original list:\n");
    for(int i=0;i<count;i++){
        if(a[i]>=10){
            printf("  %d",a[i]);
        }
        else if(a[i]<10){
            printf("   %d",a[i]);
        }
    }
    printf("\n");
    printf("The new list:\n");
    for(int i=count-1;i>=0;i--){
        if(a[i]>=10){
            printf("  %d",a[i]);
        }
        else if(a[i]<10){
            printf("   %d",a[i]);
        }
    }
    printf("\n");




    return 0;
}
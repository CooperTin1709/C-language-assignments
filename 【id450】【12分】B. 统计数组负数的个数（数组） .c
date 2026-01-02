#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int a[10];
        int num=0;
        for(int k=0;k<10;k++){
            scanf("%d",&a[k]);
            if(a[k]<0){
                num+=1;
            }
        }
        printf("%d\n",num);



    }
    return 0;
}

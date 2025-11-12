#include<stdio.h>

int count_of_even(int n){
    int a,b,c,d;
    a=(n/1000)%10;
    b=(n/100)%10;
    c=(n/10)%10;
    d=n%10;
    if((a%2==0)&&((b%2==0)&&(c%2==0)&&(d%2==0))){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int count=0;
    int satisfied[50];
    while(1){
        int n;
        scanf("%d",&n);
        if(n==-1){
            break;
        }
        if(count_of_even(n)){
            satisfied[count]=n;
            count++;
        }
    }
    for(int k1=0;k1<count-1;k1++){
        for(int k2=0;k2<count-k1-1;k2++){
            if(satisfied[k2]>satisfied[k2+1]){
                int temp;
                temp=satisfied[k2];
                satisfied[k2]=satisfied[k2+1];
                satisfied[k2+1]=temp;
            }
        }
    }
    printf("%d\n",count);
    for(int i=0;i<count;i++){
        printf("%04d\n",satisfied[i]);
    }


    return 0;
}
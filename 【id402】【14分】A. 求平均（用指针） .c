#include<stdio.h>
int main(){
    double tp[100000];
    double *p=tp,temp,sum=0.0,ava=0.0;
    int days=0;

    while(1){
        scanf("%lf",&temp);
        if(temp==0) break;
        *p=temp;
        p++;
        days++;

    }
    p=tp;
    for(int i=0;i<days;i++){
        sum+=*p;
        p++;
    }
    ava=sum/days;
    printf("%d %g",days,ava);



    return 0;
}
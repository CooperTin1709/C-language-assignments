#include<stdio.h>
int main(){
    int t;
    const double *p;
    const double usd=6.2619,eur=6.6744,jpy=0.0516,hkd=0.8065;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char type;
        double money;
        scanf(" %c %lf",&type,&money);
        switch(type){
            case'D':p=&usd;break;
            case'E':p=&eur;break;
            case'Y':p=&jpy;break;
            case'H':p=&hkd;break;
        }
        printf("%.4lf\n",money*(*p));
    }

    return 0;
}
#include<stdio.h>
int change(int a,int b){
    int t=a;
    a=b;
    b=t;
}

int main(){
    int a[1000],b[1000];
    int over=0,num=0;
    for(int i=0;i<1000;i++){
        scanf("%d %d",&a[i],&b[i]);
        num++;
        if(a[i]==b[i]) over+=1;
        if(over==2) break;
    }
    for(int h=0;h<num-1;h++){
        for(int j=0;j<num-h-1;j++){
            if(a[j]>a[j+1]) {
                int t=0;
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                t=0;
                t=b[j];
                b[j]=b[j+1];
                b[j+1]=t;
        }
    }
}
    for(int p=2;p<num;p++){
        printf("%d %d\n",a[p],b[p]);
    }


    return 0;
}
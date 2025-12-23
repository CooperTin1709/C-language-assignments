#include<stdio.h>
#include<stdlib.h>

void change(int len,int change_site,int a[]){
    change_site = change_site % len;
    int *temp;
    temp = (int*)malloc(len*sizeof(int));
    for(int i=0;i<len;i++){
        temp[i]=a[i];
    }
    for(int i=0;i<change_site;i++){
        a[i]=temp[len-change_site+i];
    }
    for(int i=0;i < len - change_site; i++){
        a[change_site + i]=temp[i];
    }
    free(temp);
}

int main(void){
    int t=0;
    scanf("%d",&t);
    int *a;
    a = (int*)malloc(t*sizeof(int));
    for(int i=0;i<t;i++){
        scanf("%d",&a[i]);
    }
    int change_site=0;
    scanf("%d",&change_site);
    change(t,change_site,a);
    for(int i=0;i<t;i++){
        printf("%d",a[i]);
        if(i!=t-1) printf(" ");
    }

    free(a);
    return 0;
}
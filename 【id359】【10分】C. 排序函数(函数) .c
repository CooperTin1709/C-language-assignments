#include<stdio.h>
#include<stdlib.h>

void rank(int a[],int len){
    for(int k=0;k<len-1;k++){
        for(int j=0;j<len-k-1;j++){
            if(a[j]>a[j+1]){
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

}

int main(void){
    int t=0;
    scanf("%d",&t);
    int *a;
    a = (int*)malloc(t*sizeof(int));
    for(int i=0;i<t;i++){
        scanf("%d",&a[i]);
    }
    rank(a,t);
    for(int i=0;i<t;i++){
        printf("%d",a[i]);
        if(i!=t-1) printf(" ");
    }
    free(a);
    return 0;
}

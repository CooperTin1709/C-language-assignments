#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int a[100000];
        for(int i1=0;i1<n;i1++){
            scanf("%d",&a[i1]);
        }
        for(int p=0;p<n-1;p++){
            for(int q=0;q<n-1-p;q++){
                if(a[q]>a[q+1]){
                    int temp=0;
                    temp=a[q];
                    a[q]=a[q+1];
                    a[q+1]=temp;
                }
            }
                if(p==0){
                    for(int i2=0;i2<n;i2++){
                        printf("%d",a[i2]);
                        if(i2!=n-1){
                            printf(" ");
                        }
                    }
                    printf("\n");
                }
        }
        for(int i3=0;i3<n;i3++){
            printf("%d",a[i3]);
            if(i3!=n-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
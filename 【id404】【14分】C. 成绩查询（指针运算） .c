#include<stdio.h>
int main(){
    int t;
    int a[1000];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        int const*p = a+n/2;
        int qian=*(p-1),hou=*(p+1);
        printf("%d %d \n",qian,hou);

        for(int k=0;k<3;k++){
            int distance=0,final;
            scanf("%d",&distance);
            final=(distance-1)-(n/2);
            int *temp=p;
            if(final>0){
                for(int h=0;h<final;h++){
                    temp++;
                }
            }else if(final<0){
                for(int h=0;h<-final;h++){
                    temp--;
                }
            }
            printf("%d ",*temp);
        }
        printf("\n");

    }


    return 0;
}
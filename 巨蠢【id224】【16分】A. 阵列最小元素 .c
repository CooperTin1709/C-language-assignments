#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n,m;
        scanf("%d %d",&n,&m);
        int a[1000][1000][3];
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                scanf("%d",a[j][k][0]);
                a[j][k][1]=j;
                a[j][k][2]=k;
            }
        }

        for(int o=0;o<n;o++){
            for(int p=0;p<m-1;p++){
                for(int q=0;q<m-p-1;q++){
                    if(a[o][q][0]>a[o][q+1][0]){
                        int temp=0;
                        temp=a[o][q][0];
                        a[o][q][0]=a[o][q+1][0];
                        a[o][q+1][0]=temp;
                        int temp0=0;
                        temp0=a[o][q][1];
                        a[o][q][1]=a[o][q+1][1];
                        a[o][q+1][1]=temp0;
                        int temp1=0;
                        temp1=a[o][q][2];
                        a[o][q][2]=a[o][q+1][2];
                        a[o][q+1][2]=temp1;
                    }
                }
            }
        }
        for(int f=0;f<n-1;f++){
            for(int g=0;g<n-f-1;g++){
                if(a[g][0][0]>a[g+1][0][0]){
                    int temp2=0;
                    temp2=a[g][0][0];
                    a[g][0][0]=a[g+1][0][0];
                    a[g+1][0][0]=temp2;
                    int temp3=0;
                    temp3=a[g][0][1];
                    a[g][0][1]=a[g+1][0][1];
                    a[g+1][0][1]=temp3;
                    int temp4=0;
                    temp4=a[g][0][2];
                    a[g][0][2]=a[g+1][0][2];
                    a[g+1][0][2]=temp4;
                }
            }
        }
        printf("%d %d %d",a[0][0][0],a[0][0][1],a[0][0][2]);
    }
    return 0;
}
#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    char a[100][100]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%s",a[i+1][j+1]);
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            int sum=0;
            if(a[i][j]=='*'){
                printf("*");
                continue;
            }
            if(a[i-1][j-1]=='*') sum+=1;
            if(a[i-1][j]=='*') sum+=1;
            if(a[i-1][j+1]=='*') sum+=1;
            if(a[i][j-1]=='*') sum+=1;
            if(a[i][j+1]=='*') sum+=1;
            if(a[i+1][j-1]=='*') sum+=1;
            if(a[i+1][j]=='*') sum+=1;
            if(a[i+1][j+1]=='*') sum+=1;
            printf("%d",sum);
            if(j==m-1) printf("\n");
        }
    }

    return 0;
}
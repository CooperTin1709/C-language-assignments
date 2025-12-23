#include<stdio.h>
#include<ctype.h>
int main(){
    int n,i,j,k,t;
    char s[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s);
        t=0;
        j=0;
        while(s[j]!='\0'){
            char c=s[j];
            int m;
            if(c=='H') m=1;
            else if(c=='C') m=12;
            else if(c=='N') m=14;
            else if(c=='O') m=16;
            else if(c=='F') m=19;
            else if(c=='P') m=31;
            else if(c=='S') m=32;
            else m=39;
            j++;
            if(isdigit(s[j])){
                int num=0;
                while(isdigit(s[j])){
                    num=num*10+(s[j]-'0');
                    j++;
                }
                t+=m*num;
            }else{
                t+=m;
            }
        }
        printf("%d\n",t);
    }
    return 0;
}
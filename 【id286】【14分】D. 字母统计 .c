#include<stdio.h>
#include<string.h>

int main(void){
    int t=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char a[1010];
        scanf("%s",a);
        int count[26]={0};
        int len=strlen(a);
        for(int k=0;k<len;k++){
            count[a[k]-'a']++;
        }
        int max=0;
        char ret='a';
        for(int k=0;k<26;k++){
            if(count[k]>max){
                max=count[k];
                ret='a'+k;
            }
        }
        printf("%c\n",ret);
    }
    return 0;
}
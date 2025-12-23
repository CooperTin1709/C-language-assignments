#include<stdio.h>
int main(){
char s[14];
scanf("%s",s);
int a[9],t=0,i;
a[0]=s[0]-'0';
a[1]=s[2]-'0';
a[2]=s[3]-'0';
a[3]=s[4]-'0';
a[4]=s[6]-'0';
a[5]=s[7]-'0';
a[6]=s[8]-'0';
a[7]=s[9]-'0';
a[8]=s[10]-'0';
for(i=0;i<9;i++)t+=a[i]*(i+1);
int m=t%11;
char r;
if(m==10)r='X';else r=m+'0';
if(r==s[12])printf("Right\n");
else{s[12]=r;printf("%s\n",s);}
return 0;
}
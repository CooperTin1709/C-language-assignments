#include<stdio.h>
int main(){
    int t;
    const char *a[]={"January", "February", "March", "April", "May", "June","July", "August", "September", "October", "November", "December"};
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int month;
        scanf("%d",&month);
        const char *result;
        if(month>=1 && month <=12){
            result=a[month-1];
        }else{
            result="error";
        }
        printf("%s\n",result);
    }

    return 0;
}
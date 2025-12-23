#include<stdio.h>
#include<string.h>

void deal(void){
    char a[8][5];
    int sm=-1,smx;
    //sm=shuang mao hao
    for(int i=0;i<8;i++){
        gets_s(a[i],4);
        getchar();
        if((strcmp(a[i], "0000")==0)&& sm==-1){
            sm=i;
            smx=0;
        }
        else if((strcmp(a[i], "0000")==0)&& sm!=-1){
            smx+=1; 
        }
    }
    for(int i=0;i<8;i++){
        if(i==sm || (i>sm && i<=sm+smx)){
            continue;
        }
        else{
            char *p=a[i][0];
            if(*p==0){
                int k0=1;
            }
            else{
                continue;
            }
        }
    }


}

int main(void){
    int t=0;
    scanf("%d",&t);
    while(t--){
        deal();
    }
    return 0;
}
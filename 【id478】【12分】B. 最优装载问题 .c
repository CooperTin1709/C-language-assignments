#include<stdio.h>

int main(){
    int N,C;
    scanf("%d %d",&N,&C);
    int box[1000][3];//0重量 1初始下标 2是否装上布尔值
    for(int i=0;i<N;i++){
        scanf("%d",&box[i][0]);
        box[i][1]=i;
        box[i][2]=0;
    }
    for(int k1=0;k1<N-1;k1++){//排序
        for(int k2=0;k2<N-1-k1;k2++){
            if(box[k2][0]>box[k2+1][0]){
            int temp1,temp2,temp3;
            temp1=box[k2][0];
            box[k2][0]=box[k2+1][0];
            box[k2+1][0]=temp1;//
            temp2=box[k2][1];
            box[k2][1]=box[k2+1][1];
            box[k2+1][1]=temp2;//
            temp3=box[k2][2];
            box[k2][2]=box[k2+1][2];
            box[k2+1][2]=temp3;
            }
        }
    }
    int lunci=0,sum=0;
    while(1){
        sum+=box[lunci][0];
        if(sum<=C){
            lunci++;
            continue;
        }
        if(sum>C){
            break;
        }
    }
    for(int i1=0;i1<lunci;i1++){
        box[i1][2]=1;
    }
    for(int i2=0;i2<N;i2++){
        for(int i3=0;i3<N;i3++){
            if((box[i3][1]==i2&&(box[i3][2]==1))){
                printf("1");
            }
            else if((box[i3]    [1]==i2)&&(box[i3][2]==0)){
                printf("0");
            }
        }
    }

return 0;
}

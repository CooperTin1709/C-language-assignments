#include<stdio.h>

struct student{
    char id[10];
    char name[10];
    int score1;
    int score2;
    int score3;
};

void input(struct student *stu){
    scanf("%s %s %d %d %d",stu->id,stu->name,&stu->score1,&stu->score2,&stu->score3);
}

void output(struct student stu){
    printf("%s,%s,%d,%d,%d\n",stu.id,stu.name,stu.score1,stu.score2,stu.score3);
}

int main(void){
    struct student students[100];
    int n=0;    
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        input(&students[i]);
    }
    for(int i=0;i<n;i++){
        output(students[i]);
    }
    return 0;

}
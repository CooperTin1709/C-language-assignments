#include<stdio.h>
#include<math.h>

int main(void){
    int n;
    scanf("%d",&n);
    while(n % 2 == 0){
        printf("2 ");
        n /= 2;
    }
    
    for(int k = 3; k <= sqrt(n); k += 2){
        while(n % k == 0){
            printf("%d ", k);
            n /= k;
        }
    }
    
    if(n > 1){
        printf("%d", n);
    }

    return 0;
}
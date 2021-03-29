#include<stdio.h>
int main(){
    int n;
    int sum=0;
    scanf("%d", &n);

    for(int i =1; i<=100; i++){
        sum = i*n;
        if(sum>=100) {
            break;
        }
        printf("%d ", sum);
        if(sum%10==0){
            break;
        }
    }
    return 0;
    }


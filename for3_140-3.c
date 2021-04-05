#include<stdio.h>
int main(){
    int n;
    int sum =0;
    int avgcnt =0;

    for(int i=0; i<20;i++){
        scanf("%d", &n);
        sum+=n;
        if(n==0){
            break;
        }
        avgcnt++;
    }
    printf("%d %d", sum, sum/avgcnt);
    return 0;
}
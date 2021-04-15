#include<stdio.h>
int main(){
    int n;
    int sum=0;
    int cnt =0;

    for(int i =0; i<3;i++){
        scanf("%d", &n);
        sum+=n;
        cnt++;
    }
    printf("sum : %d\navg : %d", sum, sum/cnt);
}
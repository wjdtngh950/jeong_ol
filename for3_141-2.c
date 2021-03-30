#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; n*i<100;i++){
        printf("%d ", n*i);
        if(n*i%10==0){
            break;
        }
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i = 2*n-1;i>0;i-=2){
        for(int j = 1;j<=2*n-1;j++){
            if(i>j){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
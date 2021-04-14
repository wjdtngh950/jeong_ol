#include<stdio.h>
int main(){
    int n;

    scanf("%d", &n);

    for(int i =0; i<n;i++){
        for(int j =0; j<2*n-1-i;j++){
            if(i>j){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<2*n-1-i;j++){
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
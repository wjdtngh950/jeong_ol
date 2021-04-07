#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i =0;i<n;i++){
        for(int j =0; j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int k=n-1;k>0;k--){
        for(int g=0;g<k;g++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
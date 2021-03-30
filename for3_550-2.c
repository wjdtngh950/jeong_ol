#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int  i=0; i<n;i++){
        for(int j=n;j>i;j--){
            printf("*");
        }
        printf("\n");
    }
    for(int k=0;k<n;k++){
        for(int g=0;g<=k;g++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
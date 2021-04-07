#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i<n; i++) {
        for (int j = 0; j <2 * n - 1-i; j++) {
            if (i>j) {
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }

    for(int k=n-2;k>=0;k--){
        for(int g = 0; g<2*n-1-k;g++){
            if(k>g){
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
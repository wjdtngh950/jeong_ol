#include<stdio.h>
int main(){
    int n1;
    int n2;

    scanf("%d %d", &n1, &n2);

    if(n1<=n2)
    for(int j= 1;j<=9;j++){
        for(int i=n1; i<=n2;i++){
            printf("%d * %d = %2d   ", i,j, i*j);
        }
        printf("\n");
    }
    else {
        for (int j = 1; j <= 9; j++) {
            for (int i = n1; i >= n2; i--) {
                printf("%d * %d = %2d   ", i, j, i * j);
            }
            printf("\n");
        }
    }
    return 0;
}
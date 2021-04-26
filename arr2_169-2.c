#include<stdio.h>
int main(){
    char al[3][5];

    for(int i=0;i<3;i++){
        for(int j =0; j<5;j++){
            scanf(" %c", &al[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j =0;j<5;j++){
            printf("%c ", al[i][j]+32);
        }
        printf("\n");
    }
    return 0;
}
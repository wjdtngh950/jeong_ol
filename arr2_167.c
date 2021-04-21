#include<stdio.h>
int main(){
    int arr[4][2];
    int hor=0;
    int ver=0;
    int avg=0;

    for(int i=0; i<4;i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<4;i++){
        hor=0;
        for(int j=0; j<2;j++){
            hor+=arr[i][j];
        }
        printf("%d ", hor/2);
    }
    printf("\n");
    for(int j=0;j<2;j++){
        ver=0;
       for(int i=0; i<4;i++){
           ver+=arr[i][j];
       }
        printf("%d ", ver/4);
    }
    printf("\n");
    for(int i=0; i<4;i++){
        for(int j=0; j<2;j++){
            avg+=arr[i][j];
        }
    }
    printf("%d ", avg/8);
    return 0;


}
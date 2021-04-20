#include<stdio.h>
int main(){
    int arr1[2][3];
    int arr2[2][3];
    printf("first array\n");
    for(int i=0; i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("second array\n");
    for(int i=0; i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0; j<3;j++){
            printf("%d ", arr1[i][j]*arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
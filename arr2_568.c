#include<stdio.h>
int main(){
 int arr1[2][4];
 int arr2[2][4];

 printf("first array\n");
 for(int i=0;i<2;i++){
     for(int j =0; j<4;j++){
         scanf("%d", &arr1[i][j]);
     }
 }
 printf("second array\n");
 for(int k=0; k<2;k++){
     for(int g=0; g<4;g++){
         scanf("%d", &arr2[k][g]);
     }
 }
 for(int x=0;x<2;x++){
     for(int y=0;y<4;y++){
         printf("%d ", arr1[x][y]*arr2[x][y]);
     }
     printf("\n");
 }
 return 0;
}
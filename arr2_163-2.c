#include<stdio.h>
int main(){
    int arr[4][3]={
            {3, 5, 9},
            {2, 11, 5},
            {8, 30, 10},
            {22, 5, 1}
    };
    int n=0;
for(int i =0; i<4;i++){
    for(int j=0; j<3;j++){
        printf("%d ", arr[i][j]);
        n+=arr[i][j];
    }
    printf("\n");
}
printf("%d", n);
return 0;

}
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
    for(int j =0; j<3;j++){
       n+=arr[i][j];
    }

}
printf("3 5 9\n"
       "2 11 5\n"
       "8 30 10\n"
       "22 5 1\n");
printf("%d", n);

}
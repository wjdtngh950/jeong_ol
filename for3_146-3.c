#include<stdio.h>
int main(){
    int num=0;
    int n;
    char c='A';
    scanf("%d", &n);

    for(int i =0; i<n;i++){
        for(int j=n;j>0;j--){
            if(i<j){
                printf("%c ", c++);
            }
            else{
                printf("%d ", num++);
            }
        }
        printf("\n");
    }
    return 0;
}
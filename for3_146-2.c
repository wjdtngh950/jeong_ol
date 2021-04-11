#include<stdio.h>
int main(){
    int n;
    int num=0;
    char c='A';
    scanf("%d", &n);

    for(int i =n;i>0;i--){
        for(int j=0;j<n;j++){
            if(i>j){
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
#include<stdio.h>
int main(){
    int n;
    int num=1;
    scanf("%d", &n);

    for(int i = 0; i<n;i++){
        for(int j =0; j<n; j++){
            if(i<=j){
                printf("%d ", num++);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
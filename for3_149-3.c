#include<stdio.h>
int main(){
    int n;
    int num;
    scanf("%d", &n);
    num=1;
    for(int i =0; i<n;i++){
        for(int j =0; j<n;j++){
            if(num>10) {
                num = 1;
            }
            printf("%d ", num);
            num+=2;
        }
        printf("\n");
    }
    return 0;
}
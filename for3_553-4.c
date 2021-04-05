#include<stdio.h>
int main(){
    char c='A';
    int n;

    scanf("%d", &n);
    for(int i =n; i>0;i--){
        for(int j =0; j<i;j++){
            printf("%c", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
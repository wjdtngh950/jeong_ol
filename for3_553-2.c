#include<stdio.h>
int main(void){
    int n;
    char c='A';

    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            printf("%c", c);
            c++;


        }
        printf("\n");
    }
    return 0;
}
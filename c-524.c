#include<stdio.h>
int main(){
    int n1;
    int n2;

    scanf("%d %d", &n1, &n2);

    if(n1&&n2==0){
        printf("%d ", 0);
    }
    else if(n1&&n2!=0){
        printf("%d ", 1);
    }
    if(n1||n2==0){
        printf("%d", 1);
    }
    else if(n1||n2!=0){
        printf("%d", 0);
    }
    return 0;
}
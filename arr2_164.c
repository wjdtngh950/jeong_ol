#include<stdio.h>
int main(){
    int arr[3];
    int n=0;
    int sum1=0, sum2=0, sum3=0, sum4=0;

    printf("1class? ");
    for(int i=0; i<3;i++){
        scanf("%d", &n);
        sum1+=n;
    }
    printf("2class? ");
    for(int i=0; i<3;i++){
        scanf("%d", &n);
        sum2+=n;
    }
    printf("3class? ");
    for(int i=0; i<3;i++){
        scanf("%d", &n);
        sum3+=n;
    }
    printf("4class? ");
    for(int i=0; i<3;i++){
        scanf("%d", &n);
        sum4+=n;
    }
    printf("1class : %d\n", sum1);
    printf("2class : %d\n", sum2);
    printf("3class : %d\n", sum3);
    printf("4class : %d\n", sum4);
    return 0;
}
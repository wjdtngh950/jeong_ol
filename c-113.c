#include<stdio.h>
int main(){
    int n1;
    int n2;

    scanf("%d %d", &n1,&n2);
    n1+=5;
    n2*=2;

    printf("width = %d\n", n1);
    printf("length = %d\n", n2);
    printf("area = %d", n1*n2);
    return 0;
}
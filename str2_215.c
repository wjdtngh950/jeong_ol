#include<stdio.h>
#include<stdlib.h>
int main(){
    char a[100];
    char b[100];

    scanf("%s %s", a, b);

    printf("%d", atoi(a)*atoi(b));
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    int* ptr=&n;
    scanf("%d", ptr);
    printf("%d...%d", *ptr/10, *ptr%10);
    return 0;
}
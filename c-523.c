#include<stdio.h>
int main(){
    int n1;
    int n2;

    scanf("%d %d", &n1, &n2);

    if(n1<n2){
        printf("%d > %d --- 0\n", n1, n2);
    }
    if(n1<n2){
        printf("%d < %d --- 1\n", n1, n2);
    }if(n1<=n2){
        printf("%d >= %d --- 0\n", n1, n2);
    }if(n1<=n2){
        printf("%d <= %d --- 1", n1, n2);
    }
    if(n1>n2){
        printf("%d > %d --- 1\n", n1, n2);
    }
    if(n1>n2){
        printf("%d < %d --- 0\n", n1, n2);
    }if(n1>=n2){
        printf("%d >= %d --- 1\n", n1, n2);
    }if(n1>=n2){
        printf("%d <= %d --- 0", n1, n2);
    }
    return 0;
}
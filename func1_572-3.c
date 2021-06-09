#include<stdio.h>
double cir(int a){
    return a*a*3.14;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%.2lf", cir(n));
    return 0;
}
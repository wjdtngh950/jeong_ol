#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[21];
    int n1;
    double n2;

    scanf("%s", str);
    n1=atoi(str);
    n2=atof(str);
    printf("%d\n%.2lf", n1*2, n2);
}
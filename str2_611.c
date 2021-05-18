#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[21];
    scanf("%s", str);

    int str1=atoi(str);
    double str2=atof(str);
    printf("%d\n%.2lf",str1*2, str2);
    return 0;
}
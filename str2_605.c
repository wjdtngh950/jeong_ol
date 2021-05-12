#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="Hong Gil Dong";
    char str2[100];

    strcpy(str2, str1);
    printf("%s", str2);
    return 0;
}
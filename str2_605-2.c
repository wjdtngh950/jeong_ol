#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Hong Gil Dong";
    char str2[100];

    strcpy(str2, str);
    printf("%s", str2);
    return 0;
}
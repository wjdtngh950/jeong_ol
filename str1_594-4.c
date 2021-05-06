#include<stdio.h>
#include<string.h>
int main(){
    char c[101];
    char c1[101]="";

    scanf("%s", c);
    strcpy(c1, c);

    printf("%s%s", c,c1);
    return 0;
}
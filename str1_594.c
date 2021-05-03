#include <stdio.h>
#include <string.h>
int main(){
    char str1[201];
    char str2[201]="";

    scanf("%s", str1);
    strcat(str2, str1);
    printf("%s%s", str1, str2);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char str1[21];
    char str2[21];
    int len1;
    int len2;

    scanf("%s %s", str1, str2);
    len1=strlen(str1);
    len2=strlen(str2);

    strncpy(str2, str1, 2);
    strncat(str2, str1, 2);
    printf("%s", str2);
    return 0;
}
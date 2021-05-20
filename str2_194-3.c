#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    int n;
    int len;

    scanf("%s %s %d", str1, str2, &n);
    strcat(str1, str2);
    printf("%s\n", str1);
    len=strlen(str2);
    str2[len<n?n:len]='\0';
    strncpy(str2, str1, n);
    printf("%s\n", str2);
    return 0;

}
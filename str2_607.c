#include<stdio.h>
#include<string.h>
int main(){
    char str1[101];
    char str2[101];
    int len1;
    int len2;
    scanf("%s %s", str1, str2);
  strncpy(str2, str1, 2);
   strncat(str2, str1, 2);
    printf("%s", str2);
    return 0;

}
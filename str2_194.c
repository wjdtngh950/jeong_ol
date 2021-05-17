#include<stdio.h>
#include<string.h>
int main(){
char str1[101];
char str2[101];
int n;
int len;

scanf("%s %s %d", str1, str2, &n);

strcat(str1, str2);
printf("%s\n", str1);
strncpy(str2, str1, n);
printf("%s", str2);
return 0;
}
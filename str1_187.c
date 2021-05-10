#include<stdio.h>
#include<string.h>
int main(){
    char str1[101];
    char str2[101];
    int n;
    int len;

    scanf("%s", str1);
    len=strlen(str1);

    while((len=strlen(str1))>1){
        strcpy(str2, str1);
        scanf("%d", &n);
        if(n>len){
            n=len;
        }
        strcpy(str1+n-1, str2+n);
        printf("%s\n", str1);
    }
    return 0;
}
#include<stdio.h>
#include<string.h>

int main(){
    char str1[101];
    char str2[101];
    int len1;
    int len2;
    scanf("%s %s", str1, str2);
    len1=strlen(str1);
    len2=strlen(str2);
    if(len1>len2){
        printf("%d", len1);
    }
    else{
        printf("%d", len2);
    }
    return 0;
}
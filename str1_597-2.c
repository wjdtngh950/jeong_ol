#include<stdio.h>
#include<string.h>
int main(){
    char str1[20];
    char str2[20];
    int lenk;
    int lene;

    scanf("%s%s", str1, str2);

    lenk=strlen(str1);
    lene=strlen(str2);

    printf("%d", lenk+lene);
    return 0;

}
#include<stdio.h>
#include<string.h>

int main(){
    char k[21];
    char e[21];
    int lenk;
    int lene;

    scanf("%s%s",k,e);

    lenk=strlen(k);
    lene=strlen(e);

    printf("%d", lenk+lene);
    return 0;
}
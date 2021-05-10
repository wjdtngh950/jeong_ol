#include<stdio.h>
#include<string.h>
int main(){
    char str[101];
    int n=1;
    int len;
    gets(str);
    len=strlen(str);
    printf("%d. ", n);
    n++;
    for(int i =0; i<len;i++){
        if(str[i]!=' '){
            printf("%c", str[i]);
        }
        else{
            printf("\n%d. ", n);
            n++;
        }
    }
    return 0;
}
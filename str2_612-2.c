#include<stdio.h>
#include<string.h>
int main(){
    char str[10000];
    int n[5];
    int len=0;

    for(int i =0;i<5;i++){
        scanf("%d", &n[i]);
        sprintf(str+len, "%d", n[i]);
        len=strlen(str);
    }
    for(int i=0;i<len;i++){
        printf("%c", str[i]);
        if(i%3==2){
            printf("\n");
        }
    }
    return 0;
}
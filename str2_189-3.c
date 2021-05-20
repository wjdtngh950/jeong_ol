#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    char* stk[101];
    int top=-1;

    gets(str);
    stk[++top]=strtok(str, " ");

    while(stk[top]!=NULL){
        stk[++top]=strtok(NULL, " ");
    }
    while(top>0){
        printf("%s\n", stk[--top]);
    }
    return 0;
}
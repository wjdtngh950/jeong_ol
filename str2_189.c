#include<stdio.h>
#include<string.h>
int main(){
    char str[10000];
    char* str_stk[100];
    int top=-1;
gets(str);
str_stk[++top]=strtok(str, " ");

while(str_stk[top]!=NULL){
    str_stk[++top]=strtok(NULL, " ");
}
while(top>0){
    printf("%s\n", str_stk[--top]);
}
return 0;
}
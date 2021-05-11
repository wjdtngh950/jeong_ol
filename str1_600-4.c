#include<stdio.h>
#include<string.h>
int main(){
    char str[101];
    int cnt=0;
    gets(str);
    int len=strlen(str);
    if(str[0]!=' '){
        cnt++;
    }
    for(int i=1; i<len;i++){
        if(str[i]==' '&&str[i+1]!=' '){
            cnt++;
        }
    }
    printf("%d", cnt++);
    return 0;
}
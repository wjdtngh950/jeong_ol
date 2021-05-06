#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    char c;
    int len;
    int cnt = 0;
    gets(str);
    len = strlen(str);
    c = str[0];

    if(c!=' '){
        cnt++;
    }
    for(int i=1;i<len;i++){
        if(str[i-1]==' '&&str[i]!=' '){
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}
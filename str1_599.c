#include<stdio.h>
#include<string.h>
int main() {
    char c[100];
    int len;

    scanf("%s", c);
    len=strlen(c);

    for(int i =0; i<len;i++){
        if('A'<=c[i]&&c[i]<='Z'){
            printf("%c", c[i]);
        }
        else if('a'<=c[i]&&c[i]<='z'){
            printf("%c", c[i]-32);
        }
    }
    return 0;

}
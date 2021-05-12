#include<stdio.h>
#include<string.h>
int main() {
    char str[10][21];
    int len;
    int last;

    for (int i = 0; i < 10; i++) {
scanf("%s", str[i]);
    }
    scanf(" %c", &last);

    for(int i =0; i<10;i++){
        len=strlen(str[i]);
        if(str[i][len-1]==last){
            printf("%s\n", str[i]);
        }
    }
    return 0;
}
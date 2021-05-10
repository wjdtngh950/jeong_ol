#include<stdio.h>
#include<string.h>

int main() {
    char str[101]={0, };
    int len;
    scanf("%s", str);
    len = strlen(str);

    for (int i = 0; i < len; i++) {
        if ('a' <= str[i] && str[i] <= 'z') {
            printf("%c", str[i]);
        } else if ('A' <= str[i] && str[i] <= 'Z') {
            printf("%c", str[i] + 32);
        } else if ('0' <= str[i]&&str[i]<= '9') {
            printf("%c", str[i]);
        }
    }
    return 0;
}
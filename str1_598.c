#include<stdio.h>

int main() {
    char c;

    for (;;) {
        scanf(" %c", &c);
        if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z')) {
            printf("%c\n", c);
        } else if ('0' <= c && c <= '9') {
            printf("%d\n", c);
        }
        else{
            break;
        }
    }
    return 0;
}
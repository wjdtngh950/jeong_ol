#include<stdio.h>

int main() {
    char c[101];

    scanf("%s", c);
    for (int i = 0; i < 5; i++) {
        printf("%c", c[i]);
    }
}
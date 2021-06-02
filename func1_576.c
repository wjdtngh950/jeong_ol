#include<stdio.h>

int func(int a, int b, char c) {
    if (c == '+') {
        return a + b;
    } else if (c == '-') {
        return a - b;
    } else if (c == '*') {
        return a * b;
    } else if (c == '/') {
        return a / b;
    } else {
        return 0;
    }
}

int main() {
    int a1;
    int b1;
    char c;
    scanf("%d %c %d", &a1, &c, &b1);
    printf("%d %c %d = %d", a1, c, b1, func(a1, b1, c));
    return 0;
}
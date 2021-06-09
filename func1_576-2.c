#include<stdio.h>

int four(int a, int b, char c) {
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
    char c1;
    int res;
    scanf("%d %c %d", &a1, &c1, &b1);
    res=four(a1, b1, c1);
    printf("%d %c %d = %d", a1, c1, b1, res);

}
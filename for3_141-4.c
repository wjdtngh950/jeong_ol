#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 100; i++) {
        if(i*n<=100) {
            printf("%d ", i * n);
        }
        if ((i * n) % 10 == 0) {
            break;
        }
    }
    return 0;

}
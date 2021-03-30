#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {//i=1 n=3
        for (int j = 0; j < 2 * n - 1 - i; j++) {
            if (i > j) {
                printf(" ");
            } else {
                printf("*");
            }

        }
        printf("\n");
    }
    return 0;
}
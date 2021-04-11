#include<stdio.h>

int main() {
    int n;
    int num = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j) {
                printf("  ");
            } else {
                printf("%d ", num++);
            }
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>

int main() {
    int n;
    int num=1;
        scanf("%d", &n);

        for (int i = n; i > 0; i--) {
            num=1;
            for (int j = 1; j <= n; j++) {
                if (i > j) {
                    printf("  ");
                }
                else {
                    printf("%d ",num++);
                }
            }
            printf("\n");
        }
        return 0;

    }
#include<stdio.h>

int main() {
    int n;
    int i;
    int sum = 0;


    for (i = 0; i < 20; i++) {
        scanf("%d", &n);
        sum += n;
        if (n == 0) {
            break;
        }

    }
    printf("%d %d", sum, sum/i);
    return 0;
}

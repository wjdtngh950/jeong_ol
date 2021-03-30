#include<stdio.h>

int main() {
    int n;
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < 20; i++) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        sum += n;
        cnt++;
    }
    printf("%d %d", sum, sum / cnt);
    return 0;
}
#include<stdio.h>
int main() {
    double arr[6] = {85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int c1;
    int c2;

    scanf("%d %d", &c1, &c2);
    printf("%.1lf", arr[c1-1]+arr[c2-1]);

    return 0;
}
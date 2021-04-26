#include<stdio.h>
int main() {
    int arr[4];
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
printf("1class? ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
        sum1 += arr[i];
    }
    printf("2class? ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
        sum2 += arr[i];
    }
    printf("3class? ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
        sum3 += arr[i];
    }
    printf("4class? ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
        sum4 += arr[i];
    }
    printf("1class : %d\n", sum1);
    printf("2class : %d\n", sum2);
    printf("3class : %d\n", sum3);
    printf("4class : %d\n", sum4);
}
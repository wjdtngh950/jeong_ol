#include<stdio.h>
int main() {
    int arr[100];
    int cnt = 0;
    int sum = 0;

    for (int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        if (arr[i]==0) {
            break;
        }
        else if (arr[i] % 5 == 0) {
            sum += arr[i];
            cnt++;
        }
    }
    printf("Multiples of 5 : %d\nsum : %d\navg : %.1lf", cnt, sum, (double)sum/cnt);
    return 0;
}
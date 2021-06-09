#include<stdio.h>

void func(int n, int* arr) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int target = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = target;
            }
        }
    }
}

int main() {
    int n1;
    int arr1[10];
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    func(n1, arr1);
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }

    return 0;
}
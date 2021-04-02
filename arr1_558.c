#include<stdio.h>

int main() {
    int arr[100];
    int target;
    for (int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) {
            target = i;
            break;
        }
    }
    for(int i = target -1;i>=0;i--){
        printf("%d ", arr[i]);
    }
    return 0;
}
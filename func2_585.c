#include<stdio.h>
int func(int *arr) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (arr[j] < arr[j + 1]) {
                int target = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = target;
            }
        }
        for(int k=0; k<10;k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

int main(){
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    func(arr);
    return 0;
}
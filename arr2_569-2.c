#include<stdio.h>

int main() {
    int arr[5][4];
    int cnt =0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
        if ((double)sum / 4 >= 80){
            printf("pass");
            cnt++;
        }
        else{
            printf("fail");
        }

        printf("\n");
    }
    printf("Successful : %d", cnt);
    return 0;
}
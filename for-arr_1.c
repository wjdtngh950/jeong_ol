#include<stdio.h>


//  1 10 11 20 21
//  2  9 12 19 22
//  3  8 13 18 23
//  4  7 14 17 24
//  5  6 15 16 25

int main() {
    int arr[5][5];
    int cnt = 1;
    // TODO 알맞은 형태로 배열 초기화

    for (int i = 0; i < 5; i++) {
        if (i % 2 == 1) {
            for (int j = 4; j >= 0; j--) {
                arr[j][i] = cnt;
                cnt++;
            }
        } else {
            for (int j = 0; j < 5; j++) {
                arr[j][i] = cnt;
                cnt++;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include<stdio.h>
int main() {
    int score;
    int stu[100] = {0,};

    for (int i = 0; i < 100; i++) {
        scanf("%d ", &score);
        if (score == 0) {
            break;
        }
        stu[score / 10]++;
    }

    for (int i = 10; i >= 0; i--) {
        if (stu[i] != 0) {
            printf("%d : %d person\n", i * 10, stu[i]);
        }
    }
    return 0;
}
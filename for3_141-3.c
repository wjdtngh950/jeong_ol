#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=100; i++) {
        if (n * i <= 100) {
            printf("%d ", n * i);
            if (n * i % 10 == 0) {
                break;
            }
        }
    }
    return 0;
}
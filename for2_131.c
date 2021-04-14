#include<stdio.h>

int main() {
    int n1;
    int n2;
    scanf("%d %d", &n1, &n2);
    if (n1 <= n2) {
        for (int i = n1; i <= n2; i++) {
            printf("%d ", i);
        }
    }
    else if(n1>n2){
        for (int i = n2; i <= n1; i++) {
            printf("%d ", i);
        }
    }
    return 0;
}
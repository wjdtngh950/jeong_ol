#include<stdio.h>
int func(int a) {
    int b =1;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            printf("%d ", b);
            b++;
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    func(n);
    return 0;
}
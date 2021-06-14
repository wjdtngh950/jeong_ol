#include<stdio.h>
void func(int a, int b){
    int a1;
    int b1;
    a1=(a-b)*(a-b);
    b1=(a+b)*(a+b)*(a+b);
    printf("(%d - %d) ^ 2 = %d\n", a, b, a1);
    printf("(%d + %d) ^ 3 = %d", a, b, b1);
}

int main(){
    int a;
    int b;
    scanf("%d %d", &a, &b);
    func(a, b);
    return 0;
}
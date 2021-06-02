#include<stdio.h>
int func(int a, int b){
    int sum =1;
    for(int i =0; i<b;i++){
        sum*=a;
    }
    return sum;
}
int main(){
    int a1;
    int b1;
    int result;
    scanf("%d%d", &a1, &b1);
    result = func(a1, b1);
    printf("%d", result);
    return 0;
}
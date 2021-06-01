#include<stdio.h>
int func(int a, int b, int c){
    int max=a;
    if(max<b){
        max=b;
    }
    if(max<c){
        max=c;
    }
    return max;
}
int main(){
    int a1;
    int b1;
    int c1;
    scanf("%d %d %d", &a1, &b1, &c1);
    printf("%d", func(a1, b1, c1));
    return 0;
}
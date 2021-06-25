#include<stdio.h>
int recur(int n){
    if(n==0){
        return 0;
    }
    return (n%10)*(n%10)+recur(n/10);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", recur(n));
    return 0;
}
#include<stdio.h>
int rec(int n){
    if(n==0){
        return 0;
    }
    return n+rec(n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    rec(n);
    printf("%d", rec(n));
    return 0;
}
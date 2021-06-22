#include<stdio.h>
int recur(int n){
    if(n==1)
        return 1;
    return recur(n/2)+recur(n-1);
}
//recur(3)= recur(1)+recur(2)
//recur(2)=recur(1)+recur(1)
//recur(3)=recur(1)+recur(1)+recur(1)

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", recur(n));
    return 0;
}
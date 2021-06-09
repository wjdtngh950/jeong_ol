#include<stdio.h>
int tsla(int a, int b){
    int sum=1;
    for(int i=0;i<b;i++){
        sum*=a;
    }
    return sum;
}

int main(){
    int a1;
    int b1;
    scanf("%d %d", &a1, &b1);
    printf("%d", tsla(a1, b1));
}
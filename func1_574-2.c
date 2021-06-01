#include<stdio.h>
int max(int a, int b, int c){
    int m=a;
    if(m<b){
        m=b;
    }
    if(m<c){
        m=c;
    }
    if(m==a){
        m=a;
    }
    printf("%d", m);
}

int main(){
    int a1;
    int b1;
    int c1;
    scanf("%d %d %d", &a1, &b1, &c1);
    max(a1, b1, c1);
    return 0;
}
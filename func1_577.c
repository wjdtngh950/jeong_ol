#include<stdio.h>
int func(int a, int b){

    if(a>b){
        a=a/2;
        b=b*2;
    }
    else{
        a=a*2;
        b=b/2;
    }
    printf("%d %d", a, b);
}
int main(){
    int a1;
    int b1;
    scanf("%d %d", &a1, &b1);
    func(a1,b1);
    return 0;
}
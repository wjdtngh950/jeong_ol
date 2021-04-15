#include<stdio.h>
int main(){
    int n1;
    int n2;

    scanf("%d %d", &n1, &n2);
    if(n1==n2){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    if(n1!=n2){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}
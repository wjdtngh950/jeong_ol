#include<stdio.h>
int main(){
    int n1;
    int n2;

    n1=100;
    scanf("%d", &n2);
    printf("%d %d ",n1, n2);

    for(;;){
        printf("%d ", n1-n2);
        int tmp = n1-n2;
        n1=n2;
        n2=tmp;

        if(n2<0){
            break;
        }

    }
    return 0;
}
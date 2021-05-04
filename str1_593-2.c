#include<stdio.h>
int main(){
    int n;

    for(;;){
        printf("ASCII code =? ");
        scanf("%d", &n);
        if(33<=n&&n<=127){
            printf("%c\n", n);
        }
        else{
            break;
        }
    }
    return 0;
}
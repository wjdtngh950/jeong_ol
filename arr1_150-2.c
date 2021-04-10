#include<stdio.h>
int main(){
    char arr[11];
    for(int i =1; i<=10;i++){
        scanf(" %c", &arr[i]);
    }

    for(int i=10;i>=1;i--){
        printf("%c ", arr[i]);
    }
    return 0;
}
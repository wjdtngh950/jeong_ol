#include<stdio.h>
int main(){
    char arr[10]={0,};

    for(int i =0;i<10;i++){
        scanf(" %c", &arr[i]);
        printf("%c", arr[i]);
    }
    return 0;
}
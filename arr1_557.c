#include<stdio.h>
int main() {
    char arr[10];

    for(int i=0; i<10;i++){
        scanf(" %c", &arr[i]);
    }
    printf("%c %c %c", arr[0],arr[3],arr[6]);
    return 0;
}
#include<stdio.h>
int main(){
    int arr[5];
    int* ptr=arr;
    for(int i =0; i<5;i++){
        scanf("%d", ptr+i);
    }
    for(int i =0;i<5;i+=2){
        printf("%d ", ptr[i]);
        //printf("%d", *(ptr+i)); 두가지 다 알아두기 결과값은 같음
    }
    return 0;
}
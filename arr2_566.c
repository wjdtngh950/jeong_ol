#include<stdio.h>
int main(){
    int arr[1000];
    arr[0]=100;
    scanf("%d", &arr[1]);
printf("%d %d ", arr[0], arr[1]);
    for(int i =2; i<1000;i++){
        arr[i]=arr[i-2]-arr[i-1];
        printf("%d ", arr[i]);
        if(arr[i]<0){
            break;
        }
    }
    return 0;
}
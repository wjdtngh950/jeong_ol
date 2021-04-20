#include<stdio.h>
int main(){
    int arr[10];
    arr[0];
    arr[1];
    scanf("%d %d",&arr[0], &arr[1]);
    printf("%d %d ", arr[0], arr[1]);

    for(int i =2;i<10;i++){
        arr[i]=arr[i-2]+arr[i-1];
        printf("%d ", arr[i]%10);
    }
    return 0;
}
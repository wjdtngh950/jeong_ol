#include<stdio.h>
int main(){
    int arr[100];

    for(int i =0; i<100;i++){
        scanf(" %d", &arr[i]);
        if(arr[i]==0){
            break;
        }
        if(arr[i]%2==0){
            printf("%d ", arr[i]/2);
        }
        else if(arr[i]%2!=0){
            printf("%d ", arr[i]*2);
        }
    }
    return 0;
}
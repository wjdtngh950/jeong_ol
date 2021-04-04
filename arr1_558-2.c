#include<stdio.h>
int main(){
    int arr[100];
    int target;

    for(int i = 0; i<100;i++){
        scanf("%d", &arr[i]);
        if(arr[i]==0){
            target = i;
            break ;
        }
    }
    for(int j = target -1; j>=0; j--){
        printf("%d ", arr[j]);
    }
    return 0;
}
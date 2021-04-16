#include<stdio.h>
int main(){
    int arr[100];
    int idx;

    for(int i =0;i<100;i++){
        scanf("%d", &arr[i]);
        if(arr[i]==-1){
            break;
        }
        idx=i;
    }
    for(int i =idx-2>=0?idx-2:0;i<=idx;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
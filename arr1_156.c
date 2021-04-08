#include<stdio.h>
int main(){
    int arr[100];
    int min_val=1;
    int max_val=1;

    for(int i =0;i<100;i++){
        scanf("%d", &arr[i]);
        if(min_val>arr[i]) {
            min_val = arr[i];
        }
        if(max_val<arr[i]&&arr[i]!=999) {
            max_val = arr[i];
        }
        if(arr[i]==999){
            break;
        }
    }
    printf("max : %d\nmin : %d", max_val, min_val);
    return 0;
}
#include<stdio.h>
int main(){
    int arr[10];
    for(int i = 0; i<10;i++) {
        scanf("%d", &arr[i]);
    }

    int max_val=-1;
    int min_val=10000;
    for(int i = 0 ; i<10;i++){
        if(arr[i]<100){
            if(max_val<arr[i]){
                max_val=arr[i];
            }
        }
        if(arr[i]>=100){
            if(min_val>arr[i]){
                min_val=arr[i];
            }
        }
    }
    printf("%d %d", max_val==-1?100:max_val, min_val==10000?100:min_val);
    return 0;
}
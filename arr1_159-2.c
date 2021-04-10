#include<stdio.h>
int main(){
    int arr[20];
    int n;

    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    for(int i =0; i<n;i++){
        for(int j =0; j<n-1;j++){
            if(arr[j]<arr[j+1]){
                int target =arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=target;
            }
        }
        }
    for(int i =0; i<n;i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int arr[11];
    int oddsum=0;
    int evensum=0;

    for(int i =1;i<=10;i++){
        scanf("%d", &arr[i]);
    }

    for(int i =1; i<=10;i++){
        if(i%2==0){
            evensum+=arr[i];
        }
        else{
            oddsum+=arr[i];
        }
    }
    printf("odd : %d\neven : %d", oddsum, evensum);
    return 0;
}
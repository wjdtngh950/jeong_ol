#include<stdio.h>
int main(){
    float arr[6];
    float sum=0;

    for(int i =0; i<6;i++){
        scanf(" %f", &arr[i]);
        sum+=arr[i];
    }
    printf("%.1f", sum/6);
    return 0;
}
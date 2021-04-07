#include<stdio.h>

int main() {
    int arr[11];
    int even_sum = 0;
    int odd_sum=0;
    int cnt = 0;

    for (int i = 1; i <=10; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i <=10; i++) {
    if(i%2==0){
        even_sum+=arr[i];
    }
    else{

        odd_sum+=arr[i];
        cnt++;
    }
    }
    printf("%d %.1lf", even_sum, (double)odd_sum/cnt);
return 0;

}
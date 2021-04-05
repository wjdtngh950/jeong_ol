#include<stdio.h>
int main(){
    int arr[10];
    int even=0;
    int odd=0;
    int oddcnt=0;


    for(int i =1; i<=10;i++){
        scanf("%d", &arr[i]);
        if(i%2==0) {
            even += arr[i];
        }
        else if(i%2!=0){
            odd+=arr[i];
            oddcnt++;
        }
    }
    printf("sum : %d\navg: %.1lf", even, (double)odd/oddcnt);
    printf("avg: %.1lf", (double)odd/oddcnt);
return 0;
}
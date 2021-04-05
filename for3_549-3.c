#include<stdio.h>
int main(){

    int n;
    int sum =0;
    int odd=0;
    scanf("%d", &n);

    for(int i =1; sum<n;i+=2){
        sum+=i;
        odd++;
    }
    printf("%d %d", odd, sum);
    return 0;
}
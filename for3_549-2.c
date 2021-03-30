#include<stdio.h>
int main(){
    int n;
    int sum=0;
    int cnt=0;

    scanf("%d", &n);
    for(int i =1;sum<n;i+=2){
        sum+=i;
        cnt++;
    }
    printf("%d %d", cnt, sum);
    return 0;
}

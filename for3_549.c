#include<stdio.h>
int main(){
    int n;
    int cnt=0;
    int sum=0;

    scanf("%d", &n);
    for(int i=1;sum<n;i+=2){
        cnt++;
        sum+=i;
    }
    printf("%d %d", cnt, sum);
    return 0;
}

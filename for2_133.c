#include<stdio.h>
int main(){
    int n;
    int n1;
    int cnt=0;
    int sum=0;

    scanf("%d", &n);
    for(int i =0; i<n;i++){
        scanf("%d", &n1);
        cnt++;
        sum+=n1;
    }
    printf("%.2lf",(double)sum/cnt);
    return 0;

}
#include<stdio.h>
int main(){
    int n1;
    int n2;
    int sum =0;
    int cnt =0;
    scanf("%d %d", &n1, &n2);

    if(n1<=n2)
    for(int i =n1;i<=n2; i++){
        if(i%3==0||i%5==0){
            cnt++;
            sum+=i;
        }
    }
    else if(n1>n2){
        for(int i = n2; i<=n1;i++){
            if(i%3==0||i%5==0){
                cnt ++;
                sum +=i;
            }
        }

    }
    printf("sum : %d\navg : %.1lf", sum, (double)sum/cnt);
    return 0;
}
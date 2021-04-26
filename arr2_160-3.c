#include<stdio.h>
int main(){
    int n;
    int cnt[6]={0, };

    for(int i =0; i<10; i++){
        scanf("%d", &n);

        cnt[n-1]++;
    }
    for(int i=1;i<=6;i++){
        printf("%d : %d\n", i, cnt[i-1]);
    }
    return 0;
}
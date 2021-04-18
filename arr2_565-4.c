#include<stdio.h>
int main(){
    int n;
    int cnt[10]={0, };

    while(1){
        scanf(" %d", &n);
        if(n==0){
            break;
        }
        cnt[n/10]++;
        }

    for(int i=0;i<10;i++) {
        if (cnt[i] != 0) {
            printf("%d : %d\n", i, cnt[i]);
        }
    }
    return 0;
}
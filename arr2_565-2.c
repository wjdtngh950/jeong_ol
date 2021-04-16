#include<stdio.h>
int main(){
    int n;
    int cnt[10]={0, };
    for(int i =0; i<100;i++){
        scanf("%d", &n);
        if(n==0){
            break;
        }
        cnt[n/10]++;
    }
    for(int i=0; i<10;i++) {
        if (cnt[i] != 0) {
            printf("%d : %d\n", i, cnt[i]);
        }
    }
    return 0;
}
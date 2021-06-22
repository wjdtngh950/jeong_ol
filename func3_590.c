#include<stdio.h>
int arr[10];
void recur(int cnt, int max, int idx){
    if(cnt==max){
        for(int i=0;i<max;i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }
    for(int i=idx;i<=6;i++){
        arr[cnt]=i;
        recur(cnt +1, max, i);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    recur(0,n, 1);
    return 0;
}
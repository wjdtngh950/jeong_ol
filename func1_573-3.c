#include<stdio.h>
int sq(int a){
    int cnt=1;
    for(int i =0; i<a;i++){
        for(int j=0;j<a;j++){
            printf("%d ", cnt++);
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d", &n);
    sq(n);
    return 0;
}
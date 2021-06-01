#include<stdio.h>
int c(int a){
    int cnt=1;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("%d ", cnt++);
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d", &n);
   c(n);
    return 0;
}
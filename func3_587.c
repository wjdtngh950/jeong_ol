#include<stdio.h>
void recurs(int n){
    if(n==0){
        return;
    }
  printf("recursive\n");
  recurs(n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    recurs(n);
    return 0;
}
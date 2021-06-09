#include<stdio.h>
char str(){
    printf("~!@#$^&*()_+|\n");
}
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n;i++){
        str();
    }
    return 0;
}
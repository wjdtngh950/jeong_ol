#include<stdio.h>
int main(){
    int n;
    int n1=1;
    char c='A';

    scanf("%d", &n);
    for(int i =n; i>0;i--){
        for(int j= 0; j<=n;j++) {
            if (i > j) {
                printf("%d ", n1);
                n1++;
            } else {
                printf("%c ", c);
                c++;
            }
        }
        printf("\n");
    }
    return 0;
}
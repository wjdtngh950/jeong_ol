#include<stdio.h>
int main(){
    int n1;
    int n2;
    int num=1;

    scanf("%d %d", &n1, &n2);

    for(int i=1;i<=n1;i++){
        num=i;
        for(int j =0; j<n2;j++){
            printf("%d " , num);
            num+=i;
        }
        printf("\n");
    }
    return 0;
}
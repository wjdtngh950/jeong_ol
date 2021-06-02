#include<stdio.h>
int func(int a, int b){
    if(a<b) {
        for(int i=a;i<=b;i++){
            printf("== %ddan ==\n", i);
            for(int j=1;j<=9;j++){
                printf("%d * %d = %2d\n", i, j, i*j);
            }
            printf("\n");
        }
    }
    else {
        for(int i=b;i<=a;i++){
            printf("== %ddan ==\n", i);
            for(int j=1;j<=9;j++){
                printf("%d * %d = %2d\n", i, j, i*j);
            }
            printf("\n");
        }
    }
}
int main(){
    int a1;
    int b1;
    scanf("%d %d", &a1, &b1);
    func(a1, b1);
    return 0;
}

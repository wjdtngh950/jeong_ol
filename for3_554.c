#include<stdio.h>
int main(){
    int n;
    char c='A';
    int num=1;
    scanf("%d", &n);

    for(int i = n; i>0;i--){
        for(int j = 0;j<=n;j++){
            if(i>j){
                printf("%d ", num);
                num++;
            }
            else{
                printf("%c ", c);
                c++;
            }

        }
        printf("\n");
    }
    return 0;
}

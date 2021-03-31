#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i <=n; i++){
        for(int j = 0;j<n;j++){
            if(i>j){
                printf("# ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int k=1;k<=n-1;k++){
        for(int g=0;g<n;g++){
            if(k>g){
                printf("  ");
            }
            else{
                printf("# ");
            }
        }
        printf("\n");
    }
    return 0;
}

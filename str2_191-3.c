#include<stdio.h>
#include<string.h>
int main(){
    char str[50][101];
    int cnt=0;

    for(int i =0; i<50;i++){
        scanf("%s", str[i]);
        if(strcmp(str[i], "0")==0){
            break;
        }
        cnt++;
    }
    printf("%d\n",cnt);
    for(int i=0;i<cnt;i++){
        if(i%2==0){
            printf("%s\n", str[i]);
        }
    }
    return 0;
}
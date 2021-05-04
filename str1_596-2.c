#include<stdio.h>
#include<string.h>
int main(){
    char str[101];
    int n;
    int len;

    scanf("%s %d", str, &n);

    len=strlen(str);

    if(len>n) {
        for (int i =0; i < n;i++){
            printf("%c", str[len-i-1]);
        }
    }
    else{
        for(int i=len-1;i>=0;i--){
            printf("%c", str[i]);
        }
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char c[101];
    int n;
    int len;

    scanf("%s %d", c, &n);
    len=strlen(c);

    if(len>n) {
        for (int i =0;i<n;i++){
            printf("%c", c[len-1-i]);
        }
    }
    else{
        for(int i =len-1;i>=0;i--){
            printf("%c", c[i]);
        }
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char str[101];
    int len;
    int cnt=0;

    gets(str);
    len=strlen(str);
    if(str[0]==' '){
        cnt =0;
    }
    else{
        printf("%c", str[0]);
        cnt=1;
    }
    for(int i=1; i<len;i++){
        if(str[i]==' '&&str[i+1]!=' ' ){
            cnt++;
            if(cnt%2==1){
              printf("\n");
            }
        }
        if(str[i]!=' '&&cnt%2==1){
            printf("%c", str[i]);
        }
    }
    return 0;
}
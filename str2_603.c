#include<stdio.h>
#include<string.h>
int main(){
    char str[101];
    int len;
    gets(str);
    len=strlen(str);
int cnt=0;

if(str[0]==' '){
    cnt=0;
}
    else{
        cnt=1;
            printf("%c", str[0]);
    }
    for(int i=1;i<len;i++){
        if(str[i]==' '&&str[i+1]!=' '){
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
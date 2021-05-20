#include<stdio.h>
#include<string.h>
int main(){
    char str[21];
    int len=0;

    for(int i=0;;i++){
        scanf("%s", str);
        len=strlen(str);
        if(strcmp(str, "END")==0){
            break;
        }
        for(int j=len-1;j>=0;j--){
            printf("%c", str[j]);
        }
        printf("\n");
    }
        return 0;
}
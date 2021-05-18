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
     for(int i=len-1;i>=0;i--){
         printf("%c", str[i]);
     }
     printf("\n");
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
int main() {
    char str[21];
    int len;

    while(1) {
       scanf("%s", str);
       if(strcmp(str, "END")==0){
           break;
       }

       len=strlen(str);
       for(int i=len-1;i>=0;i--){
           printf("%c", str[i]);
       }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char str[101];

    scanf("%s", str);
    if(strstr(str, "c")){
        printf("Yes ");
    }
    else{
        printf("No ");
    }
    if(strstr(str, "ab")){
        printf("Yes ");
    }
    else{
        printf("No");
    }
    return 0;
}
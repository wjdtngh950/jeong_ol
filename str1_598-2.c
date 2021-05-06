#include<stdio.h>
int main(){
    char str;

    while(1){
        scanf(" %c", &str);
        if(('a'<=str&&str<='z')||('A'<=str&&str<='Z')){
            printf("%c\n", str);
        }
        else if('0'<=str&&str<='9'){
            printf("%d\n", str);
        }
        else{
            break;
        }
    }
    return 0;
}
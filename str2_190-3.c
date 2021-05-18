#include<stdio.h>
#include<string.h>
int main(){
    char str[5][20]={"flower", "rose", "lily", "daffodil", "azalea"};
    char c;
    int cnt=0;
scanf("%c", &c);
    for(int i=0; i<5;i++){
        if(str[i][1]==c||str[i][2]==c){
            printf("%s\n", str[i]);
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;


}
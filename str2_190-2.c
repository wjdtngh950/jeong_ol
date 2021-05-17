#include<stdio.h>
int main(){
    char str[5][21]={"flower", "rose", "lily", "daffodil", "azalea"};
    char n;
    int cnt=0;

scanf(" %c", &n);
    for(int i =0; i<5;i++){
        if(str[i][1]==n||str[i][2]==n){
            cnt++;
            printf("%s\n", str[i]);
        }
    }
    if(cnt==0){
        printf("%d", cnt);
    }
    else{
        printf("%d", cnt);
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){

    char str[5][101];
    char s1[101];
    char s2[101];
    int cnt=0;

    for(int i =0; i<5;i++){
        scanf("%s", str[i]);
    }
    scanf("%s %s", s1, s2);

    for(int i =0; i<5;i++){
        if(strstr(str[i], s1)!=NULL||strstr(str[i], s2)!=NULL) {
            printf("%s\n", str[i]);
            cnt++;
        }
        }
    if(cnt==0){
        printf("none");
    }
    return 0;
}
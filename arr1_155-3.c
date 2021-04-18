#include<stdio.h>
int main(){
    char arr[6]={'J', 'U', 'N', 'G', 'O', 'L'};
    char c;
    int search =-1;

    scanf("%c", &c);
    for(int i=0;i<6;i++){
        if(c==arr[i]){
            search =i;
            break;
        }
    }
    if(search ==-1){
        printf("none");
    }
    else{
        printf("%d", search);
    }
    return 0;
}
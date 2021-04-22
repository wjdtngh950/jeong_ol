#include<stdio.h>
typedef struct _tall{
    char name[20];
    int tall;
}tall;

int main(){
    tall n[5];

    for(int i=0; i<5;i++){
        scanf("%s %d", n[i].name, &n[i].tall);
    }
    int target =0;
    for(int i=0; i<5;i++){
        if(n[i].tall<n[target].tall){
            target =i;
        }
    }
    printf("%s %d", n[target].name, n[target].tall);
    return 0;
}
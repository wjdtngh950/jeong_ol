#include<stdio.h>
typedef struct _name{
    char name[100];
    char num[100];
    char addr[100];
}name;
int main(){
    name a;

    scanf("%s %s %s", a.name, a.num, a.addr);
    printf("name : %s\ntel : %s\naddr : %s", a.name, a.num, a.addr);
    return 0;
}
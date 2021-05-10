#include<stdio.h>
int main(){
    char c1;
    char c2;

    scanf("%c %c", &c1, &c2);
if(c1>c2) {
    printf("%d %d", c1 + c2, c1 - c2);
}
else{
    printf("%d %d", c1+c2, c2-c1);
}
    return 0;
}
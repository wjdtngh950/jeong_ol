#include<stdio.h>
int main(){
    int n1,n2;
    int* ptr1=&n1;
    int* ptr2=&n2;
    scanf("%d %d", ptr1, ptr2);
    printf("%d + %d = %d\n", *ptr1, n2, (*ptr1)+(*ptr2));
    printf("%d - %d = %d\n", n1, n2, n1-n2);
    printf("%d * %d = %d\n", n1, n2, n1*n2);
    printf("%d / %d = %d", n1, n2, n1/n2);
return 0;
}
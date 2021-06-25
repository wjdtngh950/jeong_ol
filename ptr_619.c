#include<stdio.h>
int main(){
int n;
int* ptr=&n;
scanf("%d", &n);
printf("0X%#p %d", ptr, *ptr);
return 0;
}
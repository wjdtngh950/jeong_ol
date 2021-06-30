#include<stdio.h>
int main(){
 double arr[5];
 double*ptr =arr;
 for(int i=0;i<5;i++){
     scanf("%lf", ptr+i);
 }
 for(int i=0;i<5;i++){
     printf("%.1lf ", ptr[i]);
 }
 return 0;
}
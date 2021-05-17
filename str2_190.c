#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="flower";
    char str2[]="rose";
    char str3[]="lily";
    char str4[]="daffodil";
    char str5[]="azalea";
    char c;
    int cnt=0;

    scanf(" %c", &c);
   if(str1[1]==c|| str1[2]==c){
       printf("%s\n", str1);
       cnt++;
   }
    if(str2[1]==c|| str2[2]==c){
        printf("%s\n", str2);
        cnt++;
    }
    if(str3[1]==c|| str3[2]==c){
        printf("%s\n", str3);
        cnt++;
    }
    if(str4[1]==c|| str4[2]==c){
        printf("%s\n", str4);
        cnt++;
    }
    if(str5[1]==c|| str5[2]==c){
        printf("%s\n", str5);
        cnt++;
    }
    if(cnt==0){
        printf("0");
    }
    else {
        printf("%d", cnt);
    }
   return 0;
    }
#include<stdio.h>
typedef struct student{
    char name[21];
    int tall;
}stu;
int main(){
    stu n[5];
for(int i =0; i<5;i++){
    scanf("%s %d", n[i].name, &n[i].tall);
}
int min=0;
for(int i =0; i<5; i++){
    if(n[i].tall<n[min].tall){
        min=i;
    }
}
    printf("%s %d", n[min].name, n[min].tall);
return 0;

}
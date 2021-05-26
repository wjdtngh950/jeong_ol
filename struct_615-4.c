#include<stdio.h>
typedef struct student{
    char name[21];
    int K;
    int E;
}stu;
int main(){
    stu a;
    stu b;
    scanf("%s %d %d", a.name, &a.K, &a.E);
    scanf("%s %d %d", b.name, &b.K, &b.E);

    printf("%s %d %d\n", a.name, a.K, a.E);
    printf("%s %d %d\n", b.name, b.K, b.E);
    printf("avg %d %d", (a.K+b.K)/2, (a.E+b.E)/2);
    return 0;
}
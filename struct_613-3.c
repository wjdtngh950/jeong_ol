#include<stdio.h>
typedef struct _student{
    char name[21];
    char school[21];
    int grad;
}stu;

int main(){
    stu a;
    scanf("%s %s %d", a.name, a.school, &a.grad);
    printf("Name : %s\nSchool : %s\nGrade : %d", a.name, a.school, a.grad);
    return 0;
}
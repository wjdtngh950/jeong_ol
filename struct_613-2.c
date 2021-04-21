#include<stdio.h>

typedef struct student{
    char name[21];
    char school[21];
char grade[21];
}stu;

int main(){
    stu a;
    scanf("%s %s %s", a.name, a.school, a.grade);

    printf("Name : %s\n", a.name);
    printf("School : %s\n", a.school);
    printf("Grade : %s", a.grade);

    return 0;
}


#include<stdio.h>
   typedef struct _student{
       char name[21];
       char school[21];
       char grade[21];
   }stu;
int main(){
    stu n;

    scanf("%s %s %s", n.name, n.school, n.grade);
    printf("Name : %s\n", n.name);
    printf("School : %s\n", n.school);
    printf("Grade : %s", n.grade);
    return 0;
}
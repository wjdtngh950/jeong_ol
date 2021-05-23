#include<stdio.h>
typedef struct student{
    char school[21];
    int grad;
}stu;

int main(){
    stu a;
    stu b={"Jejuelementary", 6};

    scanf("%s %d", a.school, &a.grad);
    printf("%d grade in %s School\n", b.grad, b.school);
    printf("%d grade in %s School", a.grad, a.school);
    return 0;
}
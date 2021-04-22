#include<stdio.h>
typedef struct a{
    char school[20];
    int grade;
}a1;

int main(){
    a1 a={"Jejuelementary", 6};
    a1 b;

    scanf("%s %d", b.school, &b.grade);
    printf("6 grade in Jejuelementary School\n");
    printf("%d grade in %s School", b.grade, b.school);
    return 0;

}
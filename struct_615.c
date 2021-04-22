#include<stdio.h>

typedef struct _stu {
    char name[20];
    int score1;
    int score2;
} stu;

int main() {
    stu n1;
    stu s1;
    stu n2;
    stu s2;

    scanf("%s %d %d", n1.name, &s1.score1, &s1.score2);
    scanf("%s %d %d", n2.name, &s2.score1, &s2.score2);

    printf("%s %d %d\n", n1.name, s1.score1, s1.score2);
    printf("%s %d %d\n", n2.name, s2.score1, s2.score2);
    printf("avg  %d %d", (s1.score1+s2.score1)/2, (s1.score2+s2.score2)/2);
    return 0;
}
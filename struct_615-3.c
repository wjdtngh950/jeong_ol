#include<stdio.h>
typedef struct _stu{
    char name[20];
    int kor;
    int eng;
}stu;
int main(){
    stu a;
    stu b;
scanf("%s %d %d", a.name, &a.kor, &a.eng);
scanf("%s %d %d", b.name, &b.kor, &b.eng);

printf("%s %d %d\n", a.name, a.kor, a.eng);
printf("%s %d %d\n", b.name, b.kor, b.eng);
printf("avg %d %d",(a.kor+b.kor)/2, (a.eng+b.eng)/2);

    return 0;
}
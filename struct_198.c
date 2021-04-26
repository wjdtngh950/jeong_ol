#include<stdio.h>
typedef struct _student{
    int height;
    float weight;
}stu;

int main(){
    stu f;
    stu m;

    scanf("%d %f", &f.height, &f.weight);
    scanf("%d %f", &m.height, &m.weight);
    printf("height : %dcm\nweight : %.1lfkg", ((f.height+m.height)/2)+5, ((f.weight+m.weight)/2)-4.5);
    return 0;
}
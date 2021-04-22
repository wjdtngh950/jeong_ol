#include<stdio.h>
typedef struct _tra{
    int x;
    int y;
}tra;

int main(){
    tra x;
    tra y;
    tra z;

    scanf("%d %d %d %d %d %d", &x.x, &x.y, &y.x, &y.y, &z.x, &z.y);
    printf("(%.1lf, %.1lf)", ((double)(x.x+y.x+z.x)/3, (double)(x.y+y.y+z.y)/3);
    return 0;
}
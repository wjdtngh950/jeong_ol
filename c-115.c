#include<stdio.h>
int main(){
    int m1;
    int m2;
    int g1;
    int g2;

    scanf("%d %d", &m1, &m2);
    scanf("%d %d", &g1, &g2);

    printf("%d", m1>g1&&m2>g2);
    return 0;
}
#include<stdio.h>
int abs1(int a, int b){
    int abs1_1;
    int abs1_2;
    abs1_1=a*(a<0?-1:1);
    abs1_2=b*(b<0?-1:1);
    return abs1_1<abs1_2?b:a;
}#include<stdio.h>
int abs1(int a, int b){
    int abs1_1;
    int abs1_2;
    abs1_1=a*(a<0?-1:1);
    abs1_2=b*(b<0?-1:1);
    return abs1_1<abs1_2?b:a;
}

double abs2(double a, double b){
    int abs2_1;
    int abs2_2;
    abs2_1=a*(a<0?-1:1);
    abs2_2=b*(b<0?-1:1);
    return abs2_1<abs2_2?a:b;
}

int main(){
    int a;
    int b;
    double c;
    double d;
    scanf("%d %d %lf %lf", &a, &b, &c, &d);
    printf("%d\n", abs1(a, b));
    printf("%.2lf", abs2(c, d));
    return 0;
}

double abs2(double a, double b){
    int abs2_1;
    int abs2_2;
    abs2_1=a*(a<0?-1:1);
    abs2_2=b*(b<0?-1:1);
    return abs2_1<abs2_2?a:b;
}

int main(){
    int a;
    int b;
    double c;
    double d;
    scanf("%d %d %lf %lf", &a, &b, &c, &d);
    printf("%d\n", abs1(a, b));
    printf("%.2lf", abs2(c, d));
    return 0;
}
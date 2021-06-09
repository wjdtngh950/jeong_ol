

#include <stdio.h>
#include <math.h>

double calc_radius(double x) {
    x /= 3.14;
    return sqrt(x); //제곱근 구하는 식
}

int main(void) {
    double f;
    scanf("%lf", &f);
    printf("%.2lf", calc_radius(f));
    return 0;
}
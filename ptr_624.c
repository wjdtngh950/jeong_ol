#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    double hap=0.0f;
    double avg=0.0f;
    scanf("%d", &n);
    double* ptr=(double*)malloc(sizeof(double)* n);
    for(int i=0;i<n;i++){
        scanf("%lf", ptr+i);
    }
    for(int i=0;i<n;i++){
        printf("%.2lf ", ptr[i]);
        hap+=ptr[i];
    }
    printf("\nhap : %.2lf\n", hap);
    printf("avg : %.2lf", hap/n);
    return 0;

}
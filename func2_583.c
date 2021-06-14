#include<stdio.h>
#include<math.h>

void func1(double* arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                double target = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = target;
            }
        }
    }
}
void func2(double* arr){
     printf("%d ", (int)ceil(arr[2]));
     printf("%d ", (int)floor(arr[0]));
     printf("%d", (int)round(arr[1]));
    }

    int main(){
    double arr[3];
    scanf("%lf %lf %lf", &arr[0], &arr[1], &arr[2]);
    func1(arr, 3);
    func2(arr);
    return 0;
}
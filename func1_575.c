#include<stdio.h>
int func(int a, int b){
    int sum=1;
    for(int i=0;i<b;i++){
        sum*=a;
    }
    printf("%d", sum);
    return 0;
}
int main(){
    int a1;
    int b1;
    scanf("%d%d", &a1, &b1);
    func(a1, b1);
    return 0;

}
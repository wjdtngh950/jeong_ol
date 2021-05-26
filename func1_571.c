#include<stdio.h>
void print(){
    printf("~!@#$^&*()_+|\n");

}
int main(){
    int n;
    scanf("%d", &n);
    for(int i =0; i<n;i++){
        print();
    }
    return 0;
}
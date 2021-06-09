#include<stdio.h>
void func(int mon, int day){
    int days[]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(1<=mon&&mon<=12){
        if(1<=day&&day<=days[mon]){
            printf("OK!");
            return;
        }
    }
    printf("BAD!");
}

int main(){
    int mon;
    int day;
    scanf("%d %d", &mon, &day);
    func(mon, day);
    return 0;
}


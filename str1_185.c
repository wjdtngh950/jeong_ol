#include<stdio.h>
#include<string.h>

int main() {
    char str1[101] = {0, };
    char str2;
    int len;
    int cnt=0;


    scanf("%s %c", str1, &str2);
    len = strlen(str1);

    for (int i = 0; i <len; i++) {
        if (str1[i] == str2) {
            printf("%d", i);
            cnt=1;
            break;
        }
    }
    if(cnt==0){
        printf("No");
    }
    return 0;
}
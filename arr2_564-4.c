#include<stdio.h>
int main() {
    char cnt[26]={0, };
    char c;
    char arr[100];

    for (int i = 0; i < 100; i++) {
        scanf(" %c", &c);
        if(!('A'<=c&&c<='Z')){
            break;
        }
        cnt[c-'A']++;
    }
    for(int i =0;i<26;i++){
        if(cnt[i]!=0) {
            printf("%c : %d\n", i + 65, cnt[i]);
        }
    }
    return 0;
}
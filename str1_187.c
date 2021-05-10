#include <stdio.h>
#include <string.h>

char arr1[101];
char arr2[101];
int n;

int main(void) {
    scanf("%s", arr1);
    int len = strlen(arr1);


    while ((len = strlen(arr1)) > 1) {
        strcpy(arr2, arr1);
        scanf("%d", &n);
        if (len < n) {
            n = len;
        }
        strcpy(arr1 + n - 1, arr2 + n);
        printf("%s\n", arr1);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

void fullAdder(char operand1[], char operand2[], char result[]) {
    int len1 = strlen(operand1);
    int len2 = strlen(operand2);
    int carry = 0;
    len1--;
    len2--;
    int idx = 0;
    while (len1 >= 0 || len2 >= 0) {
        int digit1 = len1 >= 0 ? operand1[len1--] - '0' : 0;
        int digit2 = len2 >= 0 ? operand2[len2--] - '0' : 0;
        int digit = (digit1 + digit2 + carry) % 10;
        carry = (digit1 + digit2 + carry) / 10;
        result[idx++] = digit + '0';
    }
    if (carry)
        result[idx++] = carry + '0';
    result[idx] = '\0';
    strrev(result);
}

int main(void){
    char n[10000], m[10000], a[10000], k[10000], p[10000];
    int j = 1, i;

    scanf("%s", n);

    while (1) {
        strcpy(m, n);
        strrev(n);
        fullAdder(m, n, k);
        printf("[%d]: %s + %s = %s\n", j, m, n, k);
        strcpy(p, k);
        strrev(k);
        if (strcmp(p, k) == 0)
            break;
        strcpy(n, p);
        j++;
    }
}
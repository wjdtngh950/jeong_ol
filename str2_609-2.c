#include<stdio.h>
#include<string.h>

int main() {
    char str[3][1000];
    int min = 0;

    scanf("%s %s %s", str[0], str[1], str[2]);
    min = (strcmp(str[min], str[1]) > 0 ? 1 : min);
    min = (strcmp(str[min], str[2]) > 0 ? 2 : min);
    printf("%s", str[min]);
    return 0;
}
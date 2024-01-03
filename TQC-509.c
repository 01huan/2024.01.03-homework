#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[128];
    char *delim = "/";
    char *catched;
    int num[64], sum=0;
    scanf("%s", &str);
    catched = strtok(str, delim);

    while(catched) {
        printf("%d ", atoi(catched));
        sum += atoi(catched);
        catched = strtok(NULL, delim);
    }
    printf("\n%d", sum);
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_LEN 256

int main(){
    char str[MAX_LEN];
    gets(str);
    int sum = 0;

    char *pPart = strtok(str, "=");
    while(pPart != NULL){
        sum += atoi(pPart);
        pPart = strtok(NULL, "=");
    }

    printf("Sum: %d", sum);

    return 0;
}
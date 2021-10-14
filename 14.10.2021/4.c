#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main(){
    char str[MAX_SIZE] = { 0 };
    gets(str);
    for(char *ch = str; *ch != '\0'; ch++){
        if(*ch == '?') *ch = '-';
    }
    printf(str);
}
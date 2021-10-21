#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 256

int main(){
    char str[MAX_LEN];
    gets(str);
    char *pTest = strstr(str, "test");
    if(pTest != NULL){
        *pTest = '\0';
        strcat(str, "_");
        strcat(str, pTest + 4);
    }
    
    printf(str); 
    return 0;
}
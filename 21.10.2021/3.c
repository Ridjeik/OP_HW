#include <stdio.h>
#include <string.h>

#define MAX_LEN 256

int main(){
    char str[MAX_LEN];
    gets(str);

    char res[MAX_LEN];
    char *pTest = strstr(str, "test");
    char *pPrev = str;

    while(pTest != NULL){
        *pTest = '\0';
        strcat(res, pPrev);
        strcat(res, "_");
        pPrev = pTest + 4;
        pTest = strstr(pPrev, "test");
    }
    strcat(res, pPrev);
    printf(res);
    return 0;
}
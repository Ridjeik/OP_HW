#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    while((ch = getchar()) != '\n'){
        printf("%c", tolower(ch));
    }
    return 0;
}
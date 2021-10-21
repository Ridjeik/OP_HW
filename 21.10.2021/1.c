#include <stdio.h>
#include <ctype.h>

int main(){
    char chr;
    while((chr = getchar()) != EOF){
        putchar(tolower(chr));
    }
    return 0;
}
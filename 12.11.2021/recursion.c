#include <stdio.h>

void get_and_print();

int main(){
    get_and_print();
}

void get_and_print(){
    char chr = getchar();
    if(chr != EOF){
        get_and_print();
        putchar(chr); 
    }
}


#include <stdio.h>

#define FILE_NAME "fb1.bin"

int main(){
    double x;
    scanf("%lf", &x);
    fwrite(&x, sizeof(double), 1, fopen(FILE_NAME, "w"));
    return 0;
}
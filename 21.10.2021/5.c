#include <stdio.h>

int main(){
    FILE* fb1 = fopen("fb1.bin", "rb"), *fb2 = fopen("fb2.bin", "wb"), *ft1 = fopen("ft1.txt", "r"), *ft2 = fopen("ft2.txt", "w");

    double x, y;
    fread(&x, sizeof(double), 1, fb1);
    fscanf(ft1, "%lf", &y);

    double arr[] = {x, y};

    fwrite(arr, sizeof(double), 2, fb2);
    fprintf(ft2, "%lf", x + y);
    return 0;
}
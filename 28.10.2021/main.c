#include <stdio.h>
#include "equalty.h"

int main(){
    double a1 = 5.0, b1 = 3, c1 = -7,
           a2 = 1.0, b2 = -5, c2 = 6.25,
           x1_1 = 0, x1_2 = 0,
           x2_1 = 0, x2_2 = 0; 

    printf("First equation: %.2lfx^2%+.2lfx%+.2lf = 0\n", a1, b1, c1);
    printf("Second equation: %.2lfx^2%+.2lfx%+.2lf = 0\n\n", a2, b2, c2);

    int roots = solve_square(a1, b1, c1, &x1_1, &x1_2);

    if(roots == 2){
        printf("First equation has 2 solutions: x1 = %lf; x2 = %lf;\n", x1_1, x1_2);
    }
    
    else if(roots == 1){
        printf("First equation has 1 solutions: x = %lf;\n", x1_1);
    }
    else{
        printf("First equation has no solutions.\n");
    }

    roots = solve_square(a2, b2, c2, &x2_1, &x2_2);

    if(roots == 2){
        printf("Second equation has 2 solutions: x1 = %lf; x2 = %lf;\n", x2_1, x2_2);
    }
    
    else if(roots == 1){
        printf("Second equation has 1 solutions: x = %lf;\n", x2_1);
    }
    else{
        printf("Second equation has no solutions.\n");
    }
}
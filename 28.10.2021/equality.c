#include "equalty.h"
#include <math.h>

int solve_square(double a, double b, double c, double *x1, double *x2){

    if(a > -1e-6 && a < 1e-6) return 0;

    double D = b * b - 4 * a * c;
    if(D < 0){
        return 0;
    }
    else if(D > -1e-6 && D < 1e-6){
        *x1 = *x2 = -(b/(2*a));
        return 1;
    }
    else{
        *x1 = (-b + sqrt(D))/(2*a);
        *x2 = (-b - sqrt(D))/(2*a);
        return 2;
    }
    
}
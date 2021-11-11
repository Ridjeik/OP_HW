#include <stdio.h>
#include "funcs.h"

int main(){
    int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7;

    printf("Initial\n");
    printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);

    printf("\nchangeValue1p(inc1p)\n");
    changeValue1p(inc1p, &a, &b, &c, &d, &e, &f, &g, NULL);
    printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);

    printf("\nchangeValue1p(square1p)\n");
    changeValue1p(square1p, &a, &b, &c, &d, &e, &f, &g, NULL);
    printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);
    

    printf("\nchangeValue2p(inc2p)");
    printf("\nResult: %d\n", changeValue2p(inc2p, &a, &b, &c, &d, &e, &f, NULL));
    printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);
    

    printf("\nchangeValue2p(square2p)");
    printf("\nResult: %d\n", changeValue2p(square2p, &a, &b, &c, &d, &e, &f, &g, NULL));
    printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);

    printf("\nSum1: %d\n", func2v1(a, b, c, d, e, f, g, -1));
    printf("\nSum2: %d\n", func2v2(a, b, c, d, e, f, g, -1));
    
    return 0;
}
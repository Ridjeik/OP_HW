#include <stdio.h>

int main(){
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max = a;
    max = b > max ? b : max;
    max = c > max ? c : max;
    max = d > max ? d : max;

    printf("%d", max);
    return 0;
}
#include <stdio.h>

int main(){
    long long int n;
    int max = -1;
    printf("Number: ");
    scanf("%lld", &n);

    n = n >= 0 ? n : -n;

    while(n > 0){
        max = (n % 10) > max ? (n % 10) : max;
        n /= 10;
    }

    printf("Max digit: %d", max);

    return 0;
}
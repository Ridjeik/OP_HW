#include <stdio.h>

int main(){

    long long int n1 = 1, n2 = 0, n;

    scanf("%lld", &n);

    if(n <= 0){
        printf("Invalid input!");
        return 0;
    }

    for(long long int i = 0; i < n; ++i){
        if(n1 > n2){
            printf("%lld ", n1);
            n2 += n1;
        }
        else{
            printf("%lld ", n2);
            n1 += n2;
        }
    }

    return 0;
}
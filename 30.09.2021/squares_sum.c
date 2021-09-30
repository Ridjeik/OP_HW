#include <stdio.h>

int main(){
    
    int Num1, Num2;
    long long Result = 0;
    scanf("%i %i", &Num1, &Num2);

    if(Num1 % 4 != 0){
        Num1 += 4 - Num1%4;
    }

    for(int i = Num1; i <= Num2; i+=4){
        Result += i * i;
    }
    printf("%lld ", Result);

}
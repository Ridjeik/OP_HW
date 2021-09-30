#include <stdio.h>

#define SIZE 1000

int main(){

    int a[SIZE], n;
    printf("Size: ");
    scanf("%d", &n);

    if(n <= 0 || n > SIZE){
        printf("Invalid size!");
        return -1;
    }

    for(int i = 0; i < n; ++i){
        scanf("%d", a+i);
    }

    int max = a[0], min = a[0], minPos = 0, maxPos = 0;

    for(int i = 1; i < n; ++i){
        if(a[i] > max){
            max = a[i];
            maxPos = i;
        }
        if(a[i] < min){
            min = a[i];
            minPos = i;
        }
    }

    printf("max(a) = a[%d] = %d\n", maxPos, max);
    printf("min(a) = a[%d] = %d", minPos, min);

    return 0;
}
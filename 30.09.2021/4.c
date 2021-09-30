#include <stdio.h>

#define SIZE 100

int main(){
    int m[SIZE][SIZE], n;

    printf("Size: ");
    scanf("%d", &n);

    if(n <= 0 || n > SIZE){
        printf("Invalid size!");
        return -1;
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            scanf("%d", &m[i][j]);
        }
    }

    int max = m[0][n-1];
    for(int i = 1; i < n; ++i){
        max = m[i][n-i-1] > max ? m[i][n-i-1] : max;
    }
    printf("Max: %d", max);

}
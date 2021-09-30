#include <stdio.h>

#define SIZE 100

int main(){
    int rows1, col1, rows2, col2;

    printf("Size of first matrix: ");
    scanf("%d %d", &rows1, &col1);
    
    printf("Size of second matrix: ");
    scanf("%d %d", &rows2, &col2);

    if(rows1 <= 0 || rows1 > SIZE || col1 <= 0 || col1 > SIZE || rows2 <= 0 || rows2 > SIZE || col2 <= 0 || col1 > SIZE){
        printf("Invalid sizes!");
        return -1;
    }

    if(col1 != rows2){
        printf("Matices cannot be multiplied!");
        return -1;
    }

    double A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE] = { 0 };

    printf("First matrix: \n");

    for(int i = 0; i < rows1; ++i){
        for(int j = 0; j < col1; ++j){
            scanf("%lf", &A[i][j]);
        }
    }
    
    printf("Second matrix: \n");

    for(int i = 0; i < rows2; ++i){
        for(int j = 0; j < col2; ++j){
            scanf("%lf", &B[i][j]);
        }
    }

    printf("Result: \n");

    for(int i = 0; i < rows1; ++i){
        for(int j = 0; j < col2; ++j){
            for(int k = 0; k < col1; ++k){
                C[i][j] += A[i][k] * B[k][j];
            }
            printf("%.2lf ", C[i][j]);
        }
        printf("\n");
    }

    return 0;

}
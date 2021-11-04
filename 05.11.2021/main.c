#include <stdio.h>
#include "functions.h"

int main(){

    printf("(0) ABCD\n(1) calc\n(2) swap\n(3) changeValue\n(4) factorial\n(5) arrMinMax2d\n");
    printf("Which function will you choose? ");

    int choice;
    scanf("%d", &choice);

    if(choice == 0){

        int x1, x2, x3, x4, maxX, qX;
        printf("\nEnter 4 interger numbers: ");
        scanf("%d %d %d %d", &x1, &x2, &x3, &x4);
        qX = ABCD(x1, x2, x3, x4, &maxX);
        printf("Max: %d;\nQuantity: %d;\n", maxX, qX);

        int y1, y2, y3, y4, maxY, qY;
        printf("\nEnter 4 integer numbers: ");
        scanf("%d %d %d %d", &y1, &y2, &y3, &y4);
        qY = ABCD(y1, y2, y3, y4, &maxY);
        printf("Max: %d;\nQuantity: %d;\n", maxY, qY);

    }
    else if(choice == 1){
        double fx1, fx2, fx3, fsumX, fprodX;
        printf("\nEnter 3 real numbers: ");
        scanf("%lf %lf %lf", &fx1, &fx2, &fx3);
        fsumX = calc(fx1, fx2, fx3, &fprodX);
        printf("Sum: %lf;\nProduct: %lf;\n", fsumX, fprodX);

        double fy1, fy2, fy3, fsumY, fprodY;
        printf("\nEnter 3 real numbers: ");
        scanf("%lf %lf %lf", &fy1, &fy2, &fy3);
        fsumY = calc(fy1, fy2, fy3, &fprodY);
        printf("Sum: %lf;\nProduct: %lf;\n", fsumY, fprodY);
    }
    else if(choice == 2){
        int x1, x2;
        printf("\nEnter 2 integer numbers: ");
        scanf("%d %d", &x1, &x2);
        int resultX = swap(&x1, &x2);
        printf("Swaped: %d;\nx1: %d;\nx2: %d;\n", resultX, x1, x2);

        int y1, y2;
        printf("\nEnter 2 integer numbers: ");
        scanf("%d %d", &y1, &y2);
        int resultY = swap(&y1, &y2);
        printf("Swaped: %d;\nx1: %d;\nx2: %d;\n", resultY, y1, y2);
    }
    else if(choice == 3){
        int x1, x2, x3, x4, x5, maxX, minX;
        printf("\nEnter 3 integer numbers: ");
        scanf("%d %d %d", &x1, &x2, &x3);
        changeValue(x1, x2, x3, &x4, &x5, &maxX, &minX);
        printf("Max: %d;\nMin: %d;\nx4: %d;\nx5: %d;\n", maxX, minX, x4, x5);
    
        int z1, z2, z3, z4, z5, maxZ, minZ;
        printf("\nEnter 3 integer numbers: ");
        scanf("%d %d %d", &z1, &z2, &z3);
        changeValue(z1, z2, z3, &z4, &z5, &maxZ, &minZ);
        printf("Max: %d;\nMin: %d;\nz4: %d;\nz5: %d;\n", maxZ, minZ, z4, z5);
    }
    else if(choice == 4){
        int x;
        printf("\nEnter integer number: ");
        scanf("%d", &x);
        printf("Factorial: %lld\n", factorial(x));

        int y;
        printf("\nEnter integer number: ");
        scanf("%d", &y);
        printf("Factorial: %lld\n", factorial(y));
    }
    else if(choice == 5){
        int rows, columns, array[ARRAY_SIZE][ARRAY_SIZE];
        printf("Enter size of matrix: ");
        scanf("%d %d", &rows, &columns);
        printf("Enter matrix: \n");
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < columns; j++){
                scanf("%d", &array[i][j]);
            }
        }

        int max, min, maxRow, maxCol, minRow, minCol;
        arrMinMax2D(array, rows, columns, &max, &min, &maxRow, &maxCol, &minRow, &minCol);

        printf("max = array[%d][%d] = %d\n", maxRow, maxCol, max);
        printf("max = array[%d][%d] = %d\n", minRow, minCol, min);
    }
    else{
        printf("Incorrect choice!");
    }
    return 0;
}
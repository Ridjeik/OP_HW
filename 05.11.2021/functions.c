#include "functions.h"

int ABCD(int a1, int a2, int a3, int a4, int *pMaxA){
    int elements[] = {a1, a2, a3, a4};
    int max = a1, count = 1;
    for(int i = 1; i < 4; i++){
        if(elements[i] > max){
            max = elements[i];
            count = 1;
        } 
        else if(elements[i] == max){
            count++;
        }
    }
    *pMaxA = max;
    return count;
}

double calc(double a1, double a2, double a3, double *pProd){
    *pProd = a1 * a2 * a3;
    return a1 + a2 + a3;
}

int swap(int *pa1, int *pa2){
    if(*pa1 > *pa2){
        int tmp = *pa1;
        *pa1 = *pa2;
        *pa2 = tmp;
        return 1;
    }
    return 0;
}

void changeValue(int y1, int y2, int y3, int *py4, int *py5, int *pMax, int *pMin){
    *pMax = y1 > y2 ? (y1 > y3 ? y1 : y3) : (y2 > y3 ? y2 : y3);
    *pMin = y1 < y2 ? (y1 < y3 ? y1 : y3) : (y2 < y3 ? y2 : y3);
    *py4 = *pMax + *pMin;
    *py5 = *pMax - *pMin;
}

long long factorial(int n){
    if(n == 0 || n == 1) return 1L;
    else return n * factorial(n-1);
}

void arrMinMax2D(int arr[][ARRAY_SIZE], int rows, int columns, int *pMax, int *pMin, int *pRowOfMax, int *pColOfMax, int *pRowOfMin, int *pColOfMin){
    int max, min, maxRow = 0, maxCol = 0, minRow = 0, minCol = 0;
    max = min = arr[0][0];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
            else if(arr[i][j] < min){
                min = arr[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    *pMax = max;
    *pMin = min;
    *pRowOfMax = maxRow;
    *pColOfMax = maxCol;
    *pRowOfMin = minRow;
    *pColOfMin = minCol;
}

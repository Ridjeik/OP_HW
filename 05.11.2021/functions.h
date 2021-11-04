#ifndef MY_FUNCTIONS
#define FUNCTIONS

#define ARRAY_SIZE 10

int ABCD(int a1, int a2, int a3, int a4, int *pMaxA);
double calc(double a1, double a2, double a3, double *pProd);
int swap(int *pa1, int *pa2);
void changeValue(int y1, int y2, int y3, int *py4, int *py5, int *pMax, int *pMin);
long long factorial(int n);
void arrMinMax2D(int arr[][ARRAY_SIZE], int rows, int columns, int *pMax, int *pMin, int *pRowOfMax, int *pColOfMax, int *pRowOfMin, int *pColOfMin);

#endif
#ifndef FUNCTIONS
#define FUNCTIONS

int func2v1(int n, ...);
int func2v2(int n, ...);
void inc1p(int *pNum);
void inc2p(int *pNum1, int *pNum2);
void square1p(int *pNum);
void square2p(int *pNum1, int *pNum2);
void changeValue1p(void (*pOperation1p)(int*), ...);
int changeValue2p(void (*pOperation2p)(int*, int*), ...);

#endif
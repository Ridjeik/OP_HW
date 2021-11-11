#include <stdarg.h>
#include <stdlib.h>
#include "funcs.h"


int func2v1(int n, ...){
    int sum = 0;
    int *curr = &n;
    while(*curr != -1){
        sum += *curr;
        curr++;
    }
    return sum;
}

int func2v2(int n, ...){
    va_list params;
    int sum = 0;
    int curr = n;
    va_start(params, n);
    while(curr != -1){
        sum += curr;
        curr = va_arg(params, int);
    }
    va_end(params);
    return sum;
}

void inc1p(int *pNum){
    (*pNum)++;
}
void inc2p(int *pNum1, int *pNum2){
    (*pNum1)++;(*pNum2)++;
}

void square1p(int *pNum){
    (*pNum) *= (*pNum);
}
void square2p(int *pNum1, int *pNum2){
    (*pNum1) *= (*pNum1);
    (*pNum2) *= (*pNum2);
}

void changeValue1p(void (*pOperation1p)(int*), ...){
    va_list params;
    va_start(params, pOperation1p);
    int *param = va_arg(params, int*);
    while (param != NULL)
    {
        pOperation1p(param);
        param = va_arg(params, int*);
    }
    va_end(params);
}
int changeValue2p(void (*pOperation2p)(int*, int*), ...){
    va_list check_list;
    va_start(check_list, pOperation2p);
    int arg_count = 0;
    while(va_arg(check_list, int*) != NULL) arg_count++;
    
    if(arg_count % 2 != 0) return -1;
    else{
        va_list params;
        va_start(params, pOperation2p);
        int *param1 = va_arg(params, int*);
        int *param2 = va_arg(params, int*);
        while(param1 != NULL){ // param1 != NULL => param2 != NULL
            pOperation2p(param1, param2);
            param1 = va_arg(params, int*);
            param2 = va_arg(params, int*);
        }    
        va_end(params);
        return 1;
    }
}

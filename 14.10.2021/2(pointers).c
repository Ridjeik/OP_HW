#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLUMNS 10

int main(){
    int N, M, max_row, max_column;
    double matr[MAX_ROWS][MAX_COLUMNS], max, temp;
    scanf("%d %d", &N, &M);

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            scanf("%lf", &temp);
            *(*(matr + i) + j) = temp;
            if(i == 0 && j == 0) max = temp;
            else if(max < temp){
                max_row = i;
                max_column = j;
                max = temp;
            }
        }
    }

    int temp_int = (int)max;
    int width = 0;
    while(temp_int > 0){
        temp_int /= 10;
        width++;
    }

    for(int i = 0; i < (width+6) * M - 2; i++){
        printf("=");
    }
    printf("\n");

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            printf("%*.2lf  ", width+4, *(*(matr + i) + j));
        }
        printf("\n");
    }

    for(int i = 0; i < (width+6) * M - 2; i++){
        printf("=");
    }
    printf("\n\n");

    printf("Max: Element[%d, %d] = %lf", max_row, max_column, max);
    return 0;
}
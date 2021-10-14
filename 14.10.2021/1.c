#include <stdio.h>
#define MAX_SIZE 100
#define ROW_SIZE 5

int main(){
    int N, array[MAX_SIZE];
    scanf("%d", &N);
    for(int i = 0; i < N; ++i){
        scanf("%d", array+i);
    }
    
    for(int row = 0; row < N/ROW_SIZE + 1; ++row){
        int last_row_elem = (row+1) * ROW_SIZE - 1 >= N ? N-1 : (row+1) * ROW_SIZE - 1;
        for(int i = row*ROW_SIZE; i <= last_row_elem; ++i){
            printf("============");
        }
        printf("\n");
        for(int i = row*ROW_SIZE; i <= last_row_elem; ++i){
            printf("%11d ", array[i]);
        }
        printf("\n");
        for(int i = row*ROW_SIZE; i <= last_row_elem; ++i){
            printf("%11x ", array[i]);
        }
        printf("\n");
        for(int i = row*ROW_SIZE; i <= last_row_elem; ++i){
            printf("%11p ", array + i);
        }
        printf("\n");
                for(int i = row*ROW_SIZE; i <= last_row_elem; ++i){
            printf("============");
        }
        printf("\n");
    }
    return 0;
}
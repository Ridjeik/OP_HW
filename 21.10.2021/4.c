#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 256

int main(){

    char strs[MAX_LEN][MAX_LEN];
    int n;
    printf("How many words do you want to read?");
    scanf("%d", &n);
    gets(strs[0]);
    for(int i = 0; i < n; i++){
        gets(strs[i]);
    }

    printf("==================================================\n");
    char temp[MAX_LEN], word1[MAX_LEN] = {0}, word2[MAX_LEN] = {0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            for(int k = 0; k < strlen(strs[j]); k++){
                word1[k] = tolower(strs[j][k]);
            }
            for(int k = 0; k < strlen(strs[j+1]); k++){
                word2[k] = tolower(strs[j+1][k]);
            }
            if(strcmp(word1, word2) > 0){
                strcpy(temp, strs[j]);
                strcpy(strs[j], strs[j+1]);
                strcpy(strs[j+1], temp);
            }
        }
    }
            

    for(int i = 0; i < n; i++){
        printf("%s\n", strs[i]);
    }
    return 0;
}
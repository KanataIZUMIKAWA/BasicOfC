/* 2d.c */
#include<stdio.h>

int main(void){
    int X[2][3];
    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };
    int B[2][3] = {
        {7, 8, 9},
        {-1, -2, -3},
    };

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            X[i][j] = A[i][j] + B[i][j];
        }
    }

    for(int I = 0; I < 2; I++){
        for(int J = 0; J < 3; J++){
            printf("%d\t", X[I][J]);
        }
        printf("\n");
    }

    return 0;
}

#include<OPMATRIX.h>
#define N 5

void suma(int **A, int** B, int **R){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            R[i][j] = A[i][j] + B[i][j];
        }
    }
}

void resta(int **A, int** B, int **R){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            R[i][j] = A[i][j] - B[i][j];
        }
    }
}

void producto(int **A, int** B, int **R){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            R[i][j] = 0;
            for(int k = 0; k < N; k++){
                R[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void division(int **A, int** B, int **R){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            R[i][j] = A[i][j] / B[i][j];
        }
    }
}

void escalar(int **A, int escalar, int **R){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            R[i][j] = A[i][j] * escalar;
        }
    }
}
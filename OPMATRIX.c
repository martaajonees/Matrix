
#include "OPMATRIX.h"
#include <stdbool.h>
#define N 5

bool esCorrecto(int **A, int **B, int **R, bool esEscalar, bool esDivision) {
    if (!A || !R) {
        printf("Error: No se han inicializado las matrices.\n");
        return false; // Error encontrado
    }
    if (B == NULL && !esEscalar) {
        printf("Error: La matriz B no está inicializada para la operación de división.\n");
        return false;
    }
    if (esDivision) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (B[i][j] == 0) {
                    printf("Error: División por cero en la posición (%d, %d).\n", i, j);
                    return false;
                }
            }
        }
    }
    return true; // No se encontraron errores
}

void suma(int **A, int** B, int **R){
    if (!esCorrecto(A, B, R, false, false)) return;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            R[i][j] = A[i][j] + B[i][j];
        }
    }
}

void resta(int **A, int** B, int **R){
    if (!esCorrecto(A, B, R, false, false)) return;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            R[i][j] = A[i][j] - B[i][j];
        }
    }
}

void producto(int **A, int** B, int **R){
    if (!esCorrecto(A, B, R, false, false)) return;
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
    if (!esCorrecto(A, B, R, false, true)) return;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            
            R[i][j] = A[i][j] / B[i][j];
            
        }
    }
}

void escalar(int **A, int escalar, int **R){
    if (!esCorrecto(A, NULL, R, true, false)) return;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            R[i][j] = A[i][j] * escalar;
        }
    }
}


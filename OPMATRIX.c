
#include "OPMATRIX.h"
#include <stdbool.h>
#define N 5

bool esCorrecto(int **A, int **B, int **R, bool esEscalar, bool esDivision, bool esSimetrica) {
    if (!A || (!R && !esSimetrica)) {
        printf("Error: No se han inicializado las matrices.\n");
        return false; // Error encontrado
    }
    if (B == NULL && !esEscalar) {
        printf("Error: La matriz B no está inicializada.\n");
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
    if (!esCorrecto(A, B, R, false, false, false)) return;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            R[i][j] = A[i][j] + B[i][j];
        }
    }
}

void resta(int **A, int** B, int **R){
    if (!esCorrecto(A, B, R, false, false, false)) return;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            R[i][j] = A[i][j] - B[i][j];
        }
    }
}

void producto(int **A, int** B, int **R){
    if (!esCorrecto(A, B, R, false, false, false)) return;
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
    if (!esCorrecto(A, B, R, false, true, false)) return;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            
            R[i][j] = A[i][j] / B[i][j];
            
        }
    }
}

void escalar(int **A, int escalar, int **R){
    if (!esCorrecto(A, NULL, R, true, false, false)) return;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            R[i][j] = A[i][j] * escalar;
        }
    }
}

void transpuesta(int **A, int **R){
    if (!esCorrecto(A, NULL, R, true, false, false)) return;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            R[i][j] = A[j][i];
        }
    }
}

int simetrica(int **A){
    int resultado = 1;
    if (!esCorrecto(A, NULL, NULL, true, false, true)) return;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(A[i][j] != A[j][i]){
                resultado = 0;
                break;
            }
        }
    }
    return resultado;
}


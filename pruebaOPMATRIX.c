#include "OPMATRIX.c"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

// Cabeceras de funciones
void test_suma();
void test_resta();
void test_producto();
void test_division();
void test_escalar();


void assertEquals(int actual, int expected, const char* testName) {
    if (actual != expected) {
        printf("Test %s: Fallido - esperado %d, obtenido %d\n", testName, expected, actual);
    } else {
        printf("Test %s: Exitoso\n", testName);
    }
}

int main() {
    test_suma();
    test_resta();
    test_producto();
    test_division();
    test_escalar();

    return 0;
}

// Inicializamos matrices con valor dado
void inicializarMatriz(int **matriz, int valor) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = valor;
        }
    }
}

void test_suma() {
    int **A = (int **)malloc(N * sizeof(int *));
    int **B = (int **)malloc(N * sizeof(int *));
    int **R = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        A[i] = (int *)malloc(N * sizeof(int));
        B[i] = (int *)malloc(N * sizeof(int));
        R[i] = (int *)malloc(N * sizeof(int));
    }
    
    inicializarMatriz(A, 2);
    inicializarMatriz(B, 3);
    
    suma(A, B, R);
    printf("Resultado de suma cuando A=2 y B=3\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            assertEquals(R[i][j], 5, "suma");
        }
    }
    
    // Liberar memoria
    for (int i = 0; i < N; i++) {
        free(A[i]);
        free(B[i]);
        free(R[i]);
    }
    free(A);
    free(B);
    free(R);
}

void test_resta() {
    int **A = (int **)malloc(N * sizeof(int *));
    int **B = (int **)malloc(N * sizeof(int *));
    int **R = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        A[i] = (int *)malloc(N * sizeof(int));
        B[i] = (int *)malloc(N * sizeof(int));
        R[i] = (int *)malloc(N * sizeof(int));
    }
    
    inicializarMatriz(A, 5);
    inicializarMatriz(B, 3);
    
    resta(A, B, R);

    printf("Resultado de resta cuando A=5 y B=3\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            assertEquals(R[i][j], 2, "resta");
        }
    }
    
    // Liberar memoria
    for (int i = 0; i < N; i++) {
        free(A[i]);
        free(B[i]);
        free(R[i]);
    }
    free(A);
    free(B);
    free(R);
}

void test_producto() {
    int **A = (int **)malloc(N * sizeof(int *));
    int **B = (int **)malloc(N * sizeof(int *));
    int **R = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        A[i] = (int *)malloc(N * sizeof(int));
        B[i] = (int *)malloc(N * sizeof(int));
        R[i] = (int *)malloc(N * sizeof(int));
    }
    
    inicializarMatriz(A, 2);
    inicializarMatriz(B, 3);
    
    producto(A, B, R);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            assertEquals(R[i][j], 30, "producto"); // 2 * 3 * N = 30
        }
    }
    
    // Liberar memoria
    for (int i = 0; i < N; i++) {
        free(A[i]);
        free(B[i]);
        free(R[i]);
    }
    free(A);
    free(B);
    free(R);
}

void test_division() {
    int **A = (int **)malloc(N * sizeof(int *));
    int **B = (int **)malloc(N * sizeof(int *));
    int **R = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        A[i] = (int *)malloc(N * sizeof(int));
        B[i] = (int *)malloc(N * sizeof(int));
        R[i] = (int *)malloc(N * sizeof(int));
    }
    
    inicializarMatriz(A, 6);
    inicializarMatriz(B, 3);
    
    division(A, B, R);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            assertEquals(R[i][j], 2, "division");
        }
    }
    
    // Caso de división por cero
    B[0][0] = 0;
    division(A, B, R);
    
    // Liberar memoria
    for (int i = 0; i < N; i++) {
        free(A[i]);
        free(B[i]);
        free(R[i]);
    }
    free(A);
    free(B);
    free(R);
}

void test_escalar() {
    int **A = (int **)malloc(N * sizeof(int *));
    int **R = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        A[i] = (int *)malloc(N * sizeof(int));
        R[i] = (int *)malloc(N * sizeof(int));
    }
    
    inicializarMatriz(A, 4);
    
    int escalar_valor = 2;
    escalar(A, escalar_valor, R);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            assertEquals(R[i][j], 8, "escalar");
        }
    }
    
    // Liberar memoria
    for (int i = 0; i < N; i++) {
        free(A[i]);
        free(R[i]);
    }
    free(A);
    free(R);
}
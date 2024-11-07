#include "OPMATRIX.c"


void suma(int **A, int** B, int **R);
void resta(int **A, int** B, int **R);
void producto(int **A, int** B, int **R);
void division(int **A, int** B, int **R);
void escalar(int **A, int escalar, int **R);

int main() {
    // Crear matrices dinámicamente
    int **A = (int **)malloc(N * sizeof(int *));
    int **B = (int **)malloc(N * sizeof(int *));
    int **R = (int **)malloc(N * sizeof(int *));
    
    for (int i = 0; i < N; i++) {
        A[i] = (int *)malloc(N * sizeof(int));
        B[i] = (int *)malloc(N * sizeof(int));
        R[i] = (int *)malloc(N * sizeof(int));
    }

    // Inicializar matrices A y B con algunos valores
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = 2;
            B[i][j] = 3;
        }
    }

    // Realizar operaciones
    suma(A, B, R);
    printf("Suma de A y B:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }

    resta(A, B, R);
    printf("Resta de A y B:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }

    producto(A, B, R);
    printf("Producto de A y B:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }

    division(A, B, R);
    printf("Division de A entre B:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }

    int escalar_valor = 2;
    escalar(A, escalar_valor, R);
    printf("Matriz A multiplicada por %d:\n", escalar_valor);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", R[i][j]);
        }
        printf("\n");;
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

    return 0;
}
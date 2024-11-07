#include <stdio.h>
#include <stdlib.h>
#include "IOMATRIX.h"
#include "OPMATRIX.h"

#define SIZE 5

int main() {
    int opcion;
    int **A = (int**)malloc(SIZE * sizeof(int*));
    int **B = (int**)malloc(SIZE * sizeof(int*));
    int **R = (int**)malloc(SIZE * sizeof(int*));

    for (int i = 0; i < SIZE; i++)
    {
        A[i] = (int *)malloc(SIZE * sizeof(int));
        B[i] = (int *)malloc(SIZE * sizeof(int));
        R[i] = (int *)malloc(SIZE * sizeof(int));
        for (int j = 0; j < SIZE; j++)
        {
            A[i][j] = 1;
            B[i][j] = 1;
            R[i][j] = 0;
        }
    }

    printf("Bienvenido a la Calculadora de Matrices 5x5\n");

    do {
        mostrarMenuBienvenida();
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                suma(A, B, R);
                mostrarMatriz(R);
                break;

            case 2:
                printf("Saliendo del programa...\n");
                for (int i = 0; i < SIZE; i++) {
                    free(A[i]);
                    free(B[i]);
                    free(R[i]);
                }
                free(A);
                free(B);
                free(R);
                break;
            
            default:
                printf("Opción no válida.\n");
                break;
        }
    } while(opcion != 2);
    return 0;
}
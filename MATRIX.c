#include <stdio.h>
#include <stdlib.h>
#include "IOMATRIX.c"
#include "OPMATRIX.c"

#define SIZE 5

int main() {
    int opcion;
    int **A = (int**)malloc(SIZE * sizeof(int*));
    int **B = (int**)malloc(SIZE * sizeof(int*));
    int **R = (int**)malloc(SIZE * sizeof(int*));
    int escala;

    for (int i = 0; i < SIZE; i++)
    {
        R[i] = (int *)malloc(SIZE * sizeof(int));
        for (int j = 0; j < SIZE; j++)
        {
            R[i][j] = 0;
        }
    }

    printf("Bienvenido a la Calculadora de Matrices 5x5\n");

    
    cargarMatrizArchivo(A);
    registrarOperacion("Cargar Matriz");
    cargarMatrizArchivo(B);
    registrarOperacion("Cargar Matriz");

    

    do {
        mostrarMenuBienvenida();
        scanf("%d", &opcion);

        switch(opcion) {

            case 1:
                mostrarMatriz(A);
                mostrarMatriz(B);
                suma(A, B, R);
                mostrarMatriz(R);
                registrarOperacion("Suma");
                break;
            
            case 2:
                mostrarMatriz(A);
                mostrarMatriz(B);
                resta(A, B, R);
                mostrarMatriz(R);
                registrarOperacion("Resta");
                break;
            
            case 3:
                mostrarMatriz(A);
                mostrarMatriz(B);
                producto(A, B, R);
                mostrarMatriz(R);
                registrarOperacion("Producto");
                break;
            
            case 4:
                mostrarMatriz(A);
                mostrarMatriz(B);
                division(A, B, R);
                mostrarMatriz(R);
                registrarOperacion("Division");
                break;
            case 5:
                printf("Introduzca el factor de escala: \n");
                scanf("%d", &escala);
                mostrarMatriz(A);
                escalar(A, escala, R);
                registrarOperacion("Escalar");
                break;
            
            case 6:
                guardarMatrizArchivo(R);
                registrarOperacion("Guardar Matriz Resultado");
                break;
            case 7:
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
    } while(opcion != 7);
    return 0;
}
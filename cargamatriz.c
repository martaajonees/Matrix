#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANO_MATRIZ 5

int cargarMatrizArchivo(int **mat) {
    char nombreArchivo[100];

    printf("Introduce el nombre del archivo para cargar la matriz: ");
    scanf("%99s", nombreArchivo);

    FILE* archivo = fopen(nombreArchivo, "r");
    if(archivo == NULL){
        printf("Error: No se pudo abrir el archivo para lectura.");
        return -1;
    }

    for(int i = 0; i < TAMANO_MATRIZ; i++){
        for(int j = 0; j < TAMANO_MATRIZ; j++){
            if(fscanf(archivo, "%d", &mat[i][j]) != 1){
                printf("Error: No se pudo leer un valor de la matriz.");
                return -1;
            }
        }
    }

    fclose(archivo);
    // Si la matriz se carga correctamente, retornar 0
    return 0;
}

// Función para imprimir la matriz
void imprimirMatriz(int **mat) {
    for (int i = 0; i < TAMANO_MATRIZ; i++) {
        for (int j = 0; j < TAMANO_MATRIZ; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Crear una matriz dinámica
    int **matriz = (int **)malloc(TAMANO_MATRIZ * sizeof(int *));
    for (int i = 0; i < TAMANO_MATRIZ; i++) {
        matriz[i] = (int *)malloc(TAMANO_MATRIZ * sizeof(int));
    }

    cargarMatrizArchivo(matriz);

    // Imprimir la matriz cargada
    printf("Matriz cargada desde el archivo:\n");
    imprimirMatriz(matriz);

    // Liberar la memoria de la matriz
    for (int i = 0; i < TAMANO_MATRIZ; i++) {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}
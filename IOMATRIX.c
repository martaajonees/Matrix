#include <stdio.h>
#include <stdlib.h>
#include "IOMATRIX.h"

// Muestra un mensaje de bienvenida y el menú de opciones
void mostrarMenuBienvenida() {
    // Código para mostrar el menú de bienvenida en pantalla
    printf("\n--- Calculadora de Matrices 5x5 ---\n");
    printf("Seleccione una opción: \n");
    printf("1. Sumar matrices\n");
    printf("2. Salir\n");
}

// Permite al usuario cargar datos en una matriz desde la consola
void cargarMatrizConsola(int **mat) {
    // Código para solicitar al usuario los valores de la matriz 5x5 e ingresarlos en `mat`
}

// Muestra los datos de una matriz en la consola en formato de tabla 5x5
void mostrarMatriz(int **mat) {
    printf("Contenido de la matriz 5x5:\n");
    for (int i = 0; i < TAMANO_MATRIZ; i++) {
        for (int j = 0; j < TAMANO_MATRIZ; j++) {
            printf("%4d ", mat[i][j]);  // Imprime cada elemento con un ancho fijo para alineación
        }
        printf("\n");  // Nueva línea después de cada fila
    }
    printf("\n");
}

// Carga una matriz desde un archivo de texto especificado por el usuario
int cargarMatrizArchivo(int **mat, const char *nombreArchivo) {
    // Código para abrir el archivo, leer los datos y cargar la matriz en `mat`
    // Retorna 0 si tiene éxito o un código de error si falla
}

// Guarda una matriz en un archivo de texto cuyo nombre es especificado por el usuario
int guardarMatrizArchivo(int **mat, const char *nombreArchivo) {
    // Código para abrir el archivo, escribir los datos de `mat` y guardar la matriz
    // Retorna 0 si tiene éxito o un código de error si falla
}

// Registra una operación en un archivo log
int registrarOperacion(const char *operacion) {
    // Código para abrir el archivo de log, escribir la operación y cerrarlo
    // Retorna 0 si tiene éxito o un código de error si falla
}

// Muestra un mensaje de error específico
void gestionarError(const char *mensajeError) {
    // Código para mostrar el mensaje de error en la consola
}


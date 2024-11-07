#include <stdio.h>
#include <stdlib.h>
#include "IOMATRIX.h"

// Muestra un mensaje de bienvenida y el menú de opciones
void mostrarMenuBienvenida() {
    // Código para mostrar el menú en pantalla
}

// Permite al usuario cargar datos en una matriz desde la consola
void cargarMatrizConsola(Matriz *mat) {
    // Código para leer los valores de la matriz desde la entrada estándar
}

// Muestra los datos de una matriz en la consola
void mostrarMatriz(const Matriz *mat) {
        printf("Resultado de la operación:\n");

    for (int i = 0; i < TAMANO_MATRIZ; i++) {
        for (int j = 0; j < TAMANO_MATRIZ; j++) {
            printf("%4d ", mat->datos[i][j]);  // Imprime cada elemento con un ancho fijo para alinear columnas
        }
        printf("\n");  // Nueva línea después de cada fila
    }
    printf("\n");
}

// Carga una matriz desde un archivo de texto especificado por el usuario
int cargarMatrizArchivo(Matriz *mat, const char *nombreArchivo) {
    // Código para abrir el archivo, leer los datos y cargar la matriz
    // Retorna 0 si tiene éxito o un código de error si falla
}

// Guarda una matriz en un archivo de texto cuyo nombre es especificado por el usuario
int guardarMatrizArchivo(const Matriz *mat, const char *nombreArchivo) {
    // Código para abrir el archivo, escribir los datos y guardar la matriz
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

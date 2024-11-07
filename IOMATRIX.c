#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "IOMATRIX.h"

// Muestra un mensaje de bienvenida y el menú de opciones
void mostrarMenuBienvenida() {
    // Código para mostrar el menú de bienvenida en pantalla
    printf("\n--- Calculadora de Matrices 5x5 ---\n");
    printf("Seleccione una opción: \n");
    printf("1. Sumar matrices\n");
    printf("2. Restar matrices\n");
    printf("3. Producto matrices\n");
    printf("4. División matrices\n");
    printf("5. Producto escalar matrices\n");
    printf("6. Matriz simetrica\n");
    printf("7. Matriz traspuesta\n");
    printf("8. Guardar matriz en archivo\n");
    printf("9. Salir\n");
}

// Permite al usuario cargar datos en una matriz desde la consola
/* void cargarMatrizConsola(int **mat) {
    // Código para solicitar al usuario los valores de la matriz 5x5 e ingresarlos en `mat`
} */

// Muestra los datos de una matriz en la consola en formato de tabla 5x5
void mostrarMatriz(int **mat) {
    
    for (int i = 0; i < TAMANO_MATRIZ; i++) {
        for (int j = 0; j < TAMANO_MATRIZ; j++) {
            printf("%4d ", mat[i][j]);  // Imprime cada elemento con un ancho fijo para alineación
        }
        printf("\n");  // Nueva línea después de cada fila
    }
    printf("\n");
}

// Carga una matriz desde un archivo de texto especificado por el usuario
int cargarMatrizArchivo(int **mat, FILE *archivo) {
    for (int i = 0; i < TAMANO_MATRIZ; i++) {
        for (int j = 0; j < TAMANO_MATRIZ; j++) {
            if (fscanf(archivo, "%d", &mat[i][j]) != 1) {
                // Si no se puede leer un número, significa que el archivo tiene formato incorrecto
                if (feof(archivo)) {
                    return -1;  // Retorna -1 si ya no hay más datos para cargar
                } else {
                    gestionarError("Error: Formato incorrecto en el archivo.");
                    return -1;
                }
            }
        }
    }

    // Si la matriz se carga correctamente, retornar 0
    return 0;
}

// Guarda una matriz en un archivo de texto cuyo nombre es especificado por el usuario
int guardarMatrizArchivo(int **mat) {
 char nombreArchivo[100];  // Buffer para almacenar el nombre del archivo

    // Solicitar al usuario que ingrese el nombre del archivo para guardar la matriz
    printf("Introduce el nombre del archivo para guardar la matriz: ");
    scanf("%99s", nombreArchivo);  // Limita el tamaño del nombre a 99 caracteres

    // Intentar abrir el archivo en modo escritura
    FILE *archivo = fopen(nombreArchivo, "w");
    if (archivo == NULL) {
        gestionarError("Error: No se pudo abrir el archivo para escritura.");
        return -1;  // Retorna -1 si el archivo no se pudo abrir
    }

    // Escribir los datos de la matriz en el archivo
    for (int i = 0; i < TAMANO_MATRIZ; i++) {
        for (int j = 0; j < TAMANO_MATRIZ; j++) {
            fprintf(archivo, "%d ", mat[i][j]);  // Escribe cada valor seguido de un espacio
        }
        fprintf(archivo, "\n");  // Nueva línea después de cada fila
    }

    fclose(archivo);  // Cierra el archivo
    return 0;  // Retorna 0 si la matriz se guardó correctamente
}

// Registra una operación en un archivo log
int registrarOperacion(const char *operacion) {
    FILE *archivo = fopen("log_operaciones.txt", "a");  // Abre el archivo en modo adición

    if (archivo == NULL) {
        gestionarError("Error: No se pudo abrir el archivo de log.");
        return -1;  // Retorna -1 si el archivo no se pudo abrir
    }

    // Obtener la hora actual
    time_t tiempoActual = time(NULL);
    struct tm *infoTiempo = localtime(&tiempoActual);

    // Escribir la marca de tiempo y la operación en el archivo de log
    fprintf(archivo, "[%02d-%02d-%04d %02d:%02d:%02d] %s\n",
            infoTiempo->tm_mday,
            infoTiempo->tm_mon + 1,
            infoTiempo->tm_year + 1900,
            infoTiempo->tm_hour,
            infoTiempo->tm_min,
            infoTiempo->tm_sec,
            operacion);

    fclose(archivo);  // Cierra el archivo
    return 0;  // Retorna 0 si la operación fue registrada correctamente
}

// Muestra un mensaje de error específico
void gestionarError(const char *mensajeError) {
    // Imprime el mensaje de error en la consola
    fprintf(stderr, "ERROR: %s\n", mensajeError);

    // Termina la ejecución del programa
    exit(EXIT_FAILURE);
}


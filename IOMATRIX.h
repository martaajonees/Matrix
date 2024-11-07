// IOMATRIX.h
#ifndef IOMATRIX_H
#define IOMATRIX_H

#include <stdio.h>

#define TAMANO_MATRIZ 5

// Estructura para representar una matriz de tamaño fijo 5x5
typedef struct {
    int datos[TAMANO_MATRIZ][TAMANO_MATRIZ];
} Matriz;

// Función para mostrar el mensaje de bienvenida y el menú de opciones
void mostrarMenuBienvenida();

// Funciones de entrada/salida de matrices
void cargarMatrizConsola(Matriz *mat);                // Cargar datos en una matriz desde la consola
void mostrarMatriz(const Matriz *mat);                // Mostrar una matriz en la consola

// Funciones para trabajar con archivos
int cargarMatrizArchivo(Matriz *mat, const char *nombreArchivo); // Cargar matriz desde un archivo
int guardarMatrizArchivo(const Matriz *mat, const char *nombreArchivo); // Guardar matriz en un archivo

// Función para registrar eventos en el log de operaciones
int registrarOperacion(const char *operacion);        // Registrar una operación en el log

// Función para manejar errores
void gestionarError(const char *mensajeError);        // Mostrar un mensaje de error específico

#endif // IOMATRIX_H

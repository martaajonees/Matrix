// IOMATRIX.h
#ifndef IOMATRIX_H
#define IOMATRIX_H

#include <stdio.h>

#define TAMANO_MATRIZ 5

// Función para mostrar el mensaje de bienvenida y el menú de opciones
void mostrarMenuBienvenida();

// Funciones de entrada/salida de matrices
void cargarMatrizConsola(int **mat);                    // Cargar datos en una matriz desde la consola
void mostrarMatriz(int **mat);                          // Mostrar una matriz en la consola

// Funciones para trabajar con archivos
int cargarMatrizArchivo(int **mat, FILE *archivo); // Cargar matriz desde un archivo
int guardarMatrizArchivo(int **mat); // Guardar matriz en un archivo

// Función para registrar eventos en el log de operaciones
int registrarOperacion(const char *operacion);        // Registrar una operación en el log

// Función para manejar errores
void gestionarError(const char *mensajeError);        // Mostrar un mensaje de error específico

#endif // IOMATRIX_H


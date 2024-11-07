// IOMATRIX.h
#ifndef IOMATRIX_H
#define IOMATRIX_H

#include <stdio.h>

#define MATRIX_SIZE 5

// Estructura para representar una matriz de tamaño fijo 5x5
typedef struct {
    int data[MATRIX_SIZE][MATRIX_SIZE];
} Matrix;

// Función para mostrar la bienvenida y el menú de opciones
void showWelcomeMenu();

// Funciones de entrada/salida de matrices
void inputMatrix(Matrix *mat);                   // Cargar datos en una matriz desde la consola
void displayMatrix(const Matrix *mat);           // Mostrar una matriz en la consola

// Funciones para trabajar con archivos
int loadMatrixFromFile(Matrix *mat, const char *filename); // Cargar datos de una matriz desde un archivo
int saveMatrixToFile(const Matrix *mat, const char *filename); // Guardar una matriz en un archivo

// Función para registrar eventos en el log de operaciones
int logOperation(const char *operation);         // Registrar una operación en un archivo log

// Función para manejar errores
void handleError(const char *errorMessage);      // Mostrar un mensaje de error específico

#endif // IOMATRIX_H

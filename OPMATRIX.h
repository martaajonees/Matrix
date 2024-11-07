#ifndef OPMATRIX_H
#define OPMATRIX_H

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <stdbool.h>

/**
 * @brief Suma dos matrices cuadradas A y B de tamaño N x N.
 * 
 * @param A Matriz A (puntero doble).
 * @param B Matriz B (puntero doble).
 * @param R Matriz resultante R (puntero doble).
 */
void suma(int **A, int** B, int **R);

/**
 * @brief Resta la matriz B de la matriz A de tamaño N x N.
 * 
 * @param A Matriz A (puntero doble).
 * @param B Matriz B (puntero doble).
 * @param R Matriz resultante R (puntero doble).
 */
void resta(int **A, int** B, int **R);

/**
 * @brief Multiplica las matrices A y B de tamaño N x N.
 * 
 * @param A Matriz A (puntero doble).
 * @param B Matriz B (puntero doble).
 * @param R Matriz resultante R (puntero doble).
 */
void producto(int **A, int** B, int **R);

/**
 * @brief Divide elemento por elemento la matriz A entre la matriz B de tamaño N x N.
 * 
 * @param A Matriz A (puntero doble).
 * @param B Matriz B (puntero doble).
 * @param R Matriz resultante R (puntero doble).
 */

void division(int **A, int** B, int **R);

/**
 * @brief Multiplica cada elemento de la matriz A por un valor escalar.
 * 
 * @param A Matriz A (puntero doble).
 * @param escalar Valor escalar por el que se multiplicará cada elemento de A.
 * @param R Matriz resultante R (puntero doble).
 */
void escalar(int **A, int escalar, int **R);

/**
 * @brief Verifica cualquier error que pueda provocar un mal funcionamiento de las operaciones.
 * 
 * @param A Matriz A (puntero doble).
 * @param B Matriz B (puntero doble).
 * @param R Matriz resultante R (puntero doble).
 * @param esEscalar Indica si la operación es una multiplicación por escalar.
 * @param esDivision Indica si la operación es una división.
 * @return true Si no se encontraron errores.
 * @return false Si se encontraron errores.
 */
bool esCorrecto(int **A, int **B, int **R, bool esEscalar, bool esDivision, bool esSimetrica);

/**
 * @brief Calcula la transpuesta de una matriz cuadrada A de tamaño N x N.
 * 
 * @param A Matriz A (puntero doble).
 * @param R Matriz resultante R (puntero doble).
 */
void transpuesta(int **A, int **R);

/**
 * @brief Muestra si la matriz A es simétrica o no. Devuelve 1 si es simétrica y 0 si no lo es.
 * 
 * @param A Matriz A (puntero doble).
 * @param resultado Resultado de la operación.
 */
int simetrica(int **A);

#endif // OPMATRIX_H
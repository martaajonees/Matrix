#ifndef OPMATRIX_H
#define OPMATRIX_H

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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
#endif // OPMATRIX_H
#ifndef OPMATRIX_H
#define OPMATRIX_H

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// Realiza la suma de dos matrices
void suma(int **A, int** B, int **R);

// Realiza la resta de dos matrices A y B, almacenando el 
// resultado en la matriz R
void resta(int **A, int** B, int **R);

// Realiza el producto de dos matrices A y B, almacenando el 
// resultado en la matriz R
void producto(int **A, int** B, int **R);

// Realiza la división de dos matrices A y B, almacenando el 
// resultado en la matriz R
void division(int **A, int** B, int **R);

// Realiza el producto escalar de dos matrices A y B, almacenando el 
// resultado en la matriz R
void escalar(int **A, int escalar, int **R);
#endif // OPMATRIX_H
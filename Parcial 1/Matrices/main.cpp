/***********************************************************************
 * Module:  main.cpp
 * Author:  JoseSanMartin
 * Modified: martes, 22 de noviembre de 2023 07:00:04 p. m.
 * Purpose: Declarar el main de una Funcion que hace multiplicaicon de matrices
 ***********************************************************************/
#include <iostream>
#include <cstdio>
#include "OperacionesMatrices.h"

int main() {
    const int size = 2;

    int A[size][size] = {{1, 2}, {3, 4}};
    int B[size][size] = {{5, 6}, {7, 8}};
    int result[size][size] = {{0, 0}, {0, 0}};

    int** ptrA = new int*[size];
    int** ptrB = new int*[size];
    int** ptrResult = new int*[size];

    for (int i = 0; i < size; ++i) {
        ptrA[i] = A[i];
        ptrB[i] = B[i];
        ptrResult[i] = result[i];
    }

    matrixMultiply(ptrA, ptrB, ptrResult, 0, 0, 0, 0, 0, 0, size);

    printf("Matrix A:\n");
    printMatrix(ptrA, size);

    printf("Matrix B:\n");
    printMatrix(ptrB, size);

    printf("Result:\n");
    printMatrix(ptrResult, size);

    delete[] ptrA;
    delete[] ptrB;
    delete[] ptrResult;

    return 0;
}

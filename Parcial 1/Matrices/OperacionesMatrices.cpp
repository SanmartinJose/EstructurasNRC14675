#include <cstdio>
#include "OperacionesMatrices.h"

void matrixMultiply(int** A, int** B, int** result, int rowA, int colA, int rowB, int colB, int rowR, int colR, int size) {
    if (size <= 1) {
        result[rowR][colR] += A[rowA][colA] * B[rowB][colB];
    } else {
        int newSize = size / 2;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                matrixMultiply(A, B, result, rowA + i * newSize, colA, rowB, colB + j * newSize, rowR + i * newSize, colR + j * newSize, newSize);
            }
        }
    }
}

void printMatrix(int** matrix, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
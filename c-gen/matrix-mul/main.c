#include <stdio.h>
#include <stdlib.h>
#include "matrix_mul.h"

void main()
{
    int** matrix1 = malloc(sizeof(int*) * 4);
    int** matrix2 = malloc(sizeof(int*) * 4);
    int** matrix3 = malloc(sizeof(int*) * 4);
    for (int i = 0; i < 4; i++)
    {
        matrix1[i] = malloc(sizeof(int) * 4);
        matrix2[i] = malloc(sizeof(int) * 4);
        matrix3[i] = malloc(sizeof(int) * 4);
    }
    int count = 1;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matrix1[i][j] = count;
            matrix2[i][j] = count;
            count++;
        }
    }

    func_0(matrix1, matrix2, matrix3);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++){
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++){
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++){
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }
}
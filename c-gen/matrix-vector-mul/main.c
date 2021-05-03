#include <stdio.h>
#include <stdlib.h>
#include "matrix_vector_mul.h"

void main()
{
    int** matrix = malloc(sizeof(int*) * 4);
    for (int i = 0; i < 4; i++)
    {
        matrix[i] = malloc(sizeof(int) * 4);
    }
    int count = 1;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matrix[i][j] = count++;
        }
    }

    int* vector = malloc(sizeof(int) * 4);
    for (int i = 0; i < 4; i++) 
    {
        vector[i] = i;
    }

    int* result = malloc(sizeof(int) * 4);
    func_0(matrix, vector, result);

    for (int i = 0; i < 4; i++) 
    {
        printf("%d\n", result[i]);
    }
}
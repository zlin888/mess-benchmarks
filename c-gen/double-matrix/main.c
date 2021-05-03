#include <stdio.h>
#include <stdlib.h>
#include "double_matrix.h"

void main()
{
    int** a = malloc(sizeof(int*) * 5);
    int** b = malloc(sizeof(int*) * 5);
    for (int i = 0; i < 5; i++)
    {
        a[i] = malloc(sizeof(int) * 5);
        b[i] = malloc(sizeof(int) * 5);
    }
    int count = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            a[i][j] = count++;
            b[i][j] = 0;
        }
    }

    func_0(a, b);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\n", b[i][j]);
        }
    }
}
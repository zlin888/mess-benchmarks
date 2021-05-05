#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "addaddadd.h"

void main()
{
    srand(time(NULL));

    int* a = malloc(sizeof(int) * 100);
    int* b = malloc(sizeof(int) * 100);
    int* c = malloc(sizeof(int) * 100);
    int* d = malloc(sizeof(int) * 100);
    int* e = malloc(sizeof(int) * 100);
    for (int i = 0; i < 100; i++)
    {
        a[i] = rand();
        b[i] = rand();
        c[i] = rand();
    }

    clock_t start_time = clock();
    int f[1000000];
    for (int i = 0; i < 1000000; i++)
    {
        a[1] = a[1] - 30;
        b[20] = b[20] - 30;
        c[59] = c[59] - 30;
        func_1(a, b, c, d);
        f[i / 2] = d[33];
    }
    clock_t end_time = clock();
    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Done in %f seconds\n", elapsed_time);

    for (int i = 0; i < 100; i++)
    {
        printf("%d", d[i]);
    }
}
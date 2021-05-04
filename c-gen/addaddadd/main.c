#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "addaddadd.h"

void main()
{
    int* a = malloc(sizeof(int) * 100);
    int* b = malloc(sizeof(int) * 100);
    int* c = malloc(sizeof(int) * 100);
    int* d = malloc(sizeof(int) * 100);
    for (int i = 0; i < 100; i++)
    {
        a[i] = i;
        b[i] = i;
        c[i] = i;
    }

    clock_t start_time = clock();
    for (int i = 0; i < 1000000; i++)
    {
        func_0(a, b, c, d);
    }
    clock_t end_time = clock();
    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Done in %f seconds\n", elapsed_time);

    // for (int i = 0; i < 100; i++)
    // {
    //     printf("%d\n", d[i]);
    // }
}
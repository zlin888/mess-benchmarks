#include <stdio.h>
#include <stdlib.h>
#include "vector_sum.h"

void main()
{
    int* a = malloc(sizeof(int) * 12);
    for (int i = 0; i < 12; i++)
    {
        a[i] = i;
    }
    int* r = malloc(sizeof(int));

    func_0(a, r);

    printf("%d\n", *r);
}
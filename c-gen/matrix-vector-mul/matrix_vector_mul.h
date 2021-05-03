#include <stdlib.h>

void func_0(int **var5, int *var4, int *var10)
{
    for (int var17 = 0; var17 < 4; var17++)
    {
        int* var12 = malloc(sizeof(int) * 4);
        for (int var19 = 0; var19 < 4; var19++)
        {
            *(&var12[var19]) = (var5[var17][var19] * var4[var19]);
        }
        *(&var10[var17]) = 0;
        for (int var18 = 0; var18 < 4; var18++)
        {
            *(&var10[var17]) = (var12[var18] + *(&var10[var17]));
        }
    }
}
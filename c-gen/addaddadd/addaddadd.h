#include <stdlib.h>

void func_0(int *var2, int *var1, int *var0, int *var9)
{
    int *var10;
    var10 = malloc(sizeof(int) * 100);
    for (int var16 = 0; var16 < 100; var16++)
    {
        *(&var10[var16]) = (var0[var16] + var1[var16]);
    }
    for (int var15 = 0; var15 < 100; var15++)
    {
        *(&var9[var15]) = (var10[var15] + var2[var15]);
    }
    free(var10);
}
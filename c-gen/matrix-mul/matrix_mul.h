#include <stdlib.h>

void func_0(int **var5, int **var6, int **var11)
{
    for (int var19 = 0; var19 < 4; var19++)
    {
        for (int var20 = 0; var20 < 4; var20++)
        {
            int *var14;
            var14 = malloc(sizeof(int) * 4);
            for (int var22 = 0; var22 < 4; var22++)
            {
                *(&var14[var22]) = (var5[var20][var22] * var6[var19][var22]);
            }
            *(&var11[var19][var20]) = 0;
            for (int var21 = 0; var21 < 4; var21++)
            {
                *(&var11[var19][var20]) = (var14[var21] + *(&var11[var19][var20]));
            }
        }
    }
}
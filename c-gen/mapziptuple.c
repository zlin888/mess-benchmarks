#include <stdio.h>

void func_0 (int* var2, int* var1, int* var0, int* var9)
{
int* var10 = malloc(sizeof(int) * 100);
for (int var16 = 0; var16 < 100; var16++)
{
*(&var10[var16]) = (var0[var16] + var1[var16]);
}
for (int var15 = 0; var15 < 100; var15++)
{
*(&var9[var15]) = (*(var10)[var15] + var2[var15]);
}
}

void main()
{
    int a[] = {1,2,3,4,5,6,7,8};
    int b[] = {1,2,3,4,5,6,7,8};
    int c0[] = {0,0,0,0};
    int c1[] = {0,0,0,0};
    int *c[] = {c0, c1};

    func_0(a, b, c);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\n", c[i][j]);
        }
    }
}
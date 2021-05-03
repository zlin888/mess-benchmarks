void func_0 (int** var2, int** var4)
{
for (int var7 = 0; var7 < 5; var7++)
{
for (int var8 = 0; var8 < 5; var8++)
{
*(&var4[var7][var8]) = (var2[var7][var8] * var2[var7][var8]);
}
}
}
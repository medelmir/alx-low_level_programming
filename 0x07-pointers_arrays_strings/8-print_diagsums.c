#include "main.h"
/**
*print_diagsums - prints the sum of the two diagonals
*@a: pram
*@size: param
*
*/
void print_diagsums(int *a, int size)
{
int dia1 = 0, dia2 = 0;
for (int i = 0; i < size; i++)
{
dia1 += a[i * size + i];
}
for (int i = 0; i < size; i++)
{
dia2 += a[i * size + (size - i - 1)];
}
printf("%d, %d\n", dia1, dia2);
}

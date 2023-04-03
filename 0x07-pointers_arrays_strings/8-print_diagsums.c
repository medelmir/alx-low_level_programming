#include "main.h"
/**
*print_diagsums - prints the sum of the two diagonals
*@a: pram
*@size: param
*
*/
void print_diagsums(int *a, int size)
{
int i;
int j;
int d1 = 0, d2 = 0;
for (i = 0; i < size; i++)
{
d1 += a[i * size + i];
}
for (j = 0; j < size; j++)
{
d2 += a[j * size + (size - j - 1)];
}
printf("%d, %d\n", d1, d2);
}

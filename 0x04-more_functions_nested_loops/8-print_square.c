#include "main.h"
/**
* print_square - prints a square, followed by a new line
*  @size: int to be checked
*
*/
void print_square(int size)
{
int i, j;
if (size <= 0)
{
putchar('\n');
}
else
{
for (i = 0 ; i < size ; i++)
{
putchar('#');
}
putchar('\n');
}
}

#include "main.h"
/**
* swap_int - that swaps the values of two integers
* @a : pointer
* @b : pointer
*/
void swap_int(int *a, int *b)
{
int p;
p = *a;
*a = *b;
*b = p;
}

#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the number
 * @index: index
 * Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i = 1;
if (index > 63)
return (-1);
i = i << index;
*n = *n & ~i;
return (1);
}


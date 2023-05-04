#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: index
 * Return: 1 if it worked, or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i = 1;
if (index > 63)
return (-1);
i = i << index;
*n = *n | i;
return (1);
}


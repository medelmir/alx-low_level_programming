#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 * Return: the converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
int size = 0;
unsigned int num = 0;
int i = 0;
if (b == NULL)
return (0);
while (b[size] != '\0')
{
if (b[size] != '0' && b[size] != '1')
return (0);
size++;
}
while (b[i] != '\0')
{
num = num << 1;
if (b[i] == '1')
num = num + 1;
i++;
}
return (num);
}


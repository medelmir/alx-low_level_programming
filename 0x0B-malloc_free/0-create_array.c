#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - unction that creates an array of chars
* @size: size of the array
* @c: char
* Return: null if size==0 or buffer==0 otherwise buffer
*/
char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int i;
buffer = (char *) malloc(size * sizeof(char));
if (size == 0)
{
return (NULL);
}
if (buffer == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
buffer[i] = c;
}
return (buffer);
}

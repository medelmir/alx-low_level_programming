#include "main.h"
/**
* _memcpy - function that copies memory area
* @n: param
* @src: param
* @dest: param
* Return: a pointer to dest
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

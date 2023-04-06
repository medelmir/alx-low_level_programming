#include "main.h"
/**
* _memset - function that fills memory with a constant byte
* @n: param
* @s: param
* @b: pram
* Return: a pointer @s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
for (; i < n; i++)
{
s[i] = b;
}
return (s);
}

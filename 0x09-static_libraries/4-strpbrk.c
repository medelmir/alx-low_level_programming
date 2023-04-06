#include "main.h"
/**
* _strpbrk - function that searches a string for any of a set of bytes.
* @s: param
* @accept: param
* Return: a pointer to the byte
*/
#include <stdio.h>
char *_strpbrk(char *s, char *accept)
{
char *p = s;
while (*p)
{
char *q = accept;
while (*q)
{
if (*p == *q)
return (p);
q++;
}
p++;
}
return (NULL);
}

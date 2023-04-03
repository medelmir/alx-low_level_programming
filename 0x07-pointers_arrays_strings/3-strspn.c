#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strspn - function that gets the length of a prefix substring.
* @s: param
* @accept: param
* Return: the number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
while (s[i] && strchr(accept, s[i]))
{
i++;
}
return (i);
}

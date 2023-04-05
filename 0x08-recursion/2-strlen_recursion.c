#include "main.h"
/**
* _strlen_recursion - function that returns the length of a string.
* @s:param
* Return: int
*/
int _strlen_recursion(char *s)
{
int i = 0;
if (*s != '\0')
{
i++;
return (i + _strlen_recursion(s + 1));
}
else
return (i);
}

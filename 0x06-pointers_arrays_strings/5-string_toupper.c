#include "main.h"
/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @src : param
*
* Return: src
*
*/
char *string_toupper(char *src)
{
int len = 0;
int i;
while (src[len] != '\0')
{
len++;
}
for (i = 0 ; i < len ; i++)
{
if (src[i] >= 'a' && src[i] <= 'z')
{
src[i] = src[i] - 32;
}
}
return (src);
}

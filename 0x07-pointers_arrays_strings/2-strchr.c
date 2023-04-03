#include "main.h"
/**
* _strchr -function that locates a character in a string.
* @c: param
* @s: param
* Return: a pointer to the first occurrence of the character
*/
char *_strchr(char *s, char c)
{
int len = 0;
int i;
while (s[len] != '\0')
{
len++;
}
if (c == '\0')
{
return (NULL);
}
for (i = 0 ; i < len ; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}

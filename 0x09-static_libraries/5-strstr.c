#include "main.h"
/**
 * * _strstr - function that locates a substring.
 * * @haystack: param
 * * @needle: param
 * * Return: a pointer substring or null if it not foound.
 * **/
char *_strstr(char *haystack, char *needle)
{
char *m = haystack;
char *n = needle;
char *z;
if (*needle == '\0')
{
return (haystack);
}
while (*m != '\0')
{
if ((*m) == (*n))
{
z = m;
while ((*m) == (*n))
{
m++;
n++;
}
if (*n == '\0')
{
return (z);
}
n = needle;
}
m++;
}
return (0);
}

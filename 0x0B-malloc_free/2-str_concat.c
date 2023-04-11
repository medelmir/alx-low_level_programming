#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings.
 * @s1: param
 * @s2: param
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *str_c;
int x, z;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
x = z = 0;
while (s1[x] != '\0')
x++;
while (s2[z] != '\0')
z++;
str_c = malloc(sizeof(char) * (x + z + 1));
if (str_c == NULL)
return (NULL);
x = z = 0;
while (s1[x] != '\0')
{
str_c[x] = s1[x];
x++;
}
while (s2[z] != '\0')
{
str_c[x] = s2[z];
x++, z++;
}
str_c[x] = '\0';
return (str_c);
}

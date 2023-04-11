#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat -  function that concatenates two strings.
* @s1: param
* @s2: param
* Return: null if s==null otherwise s
*/
char *str_concat(char *s1, char *s2)
{
char *s;
int i, j, z, y;
z = 0;
y = 0;
while (s1[z] != '\0')
{
z++;
}
while (s2[y] != '\0')
{
y++;
}
s = (char *) malloc(z + y + 1);
if (s == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
s[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; j++)
{
s[i++] = s2[j];
}
s[i] = '\0';
return (s);
}

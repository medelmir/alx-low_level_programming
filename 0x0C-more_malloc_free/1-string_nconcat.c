#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat -  function that concatenates two strings
* @s1: param
* @s2: param
* @n: param
* Return: a Sring pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, j, length1, length2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
length1 = strlen(s1);
length2 = strlen(s2);
if (n > length2)
n = length2;
s = malloc(length1 + n + 1);
if (s == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
s[i] = s1[i];
for (j = 0; j < n; j++)
{
s[i] = s2[j];
i++;
}
s[i] = '\0';
return (s);
}

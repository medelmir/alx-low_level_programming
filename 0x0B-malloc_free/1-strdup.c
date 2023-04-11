#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*   _strdup - function that returns a pointer which contains copy
*  @str: param
*   Return: Null if str is null otherwise pointer to new copy param
*/
char *_strdup(char *str)
{
char *strcp;
int i;
i = 0;
if (str == NULL)
{
return (NULL);
}
while (str[i] != '\0')
{
i++;
}
strcp = malloc((i + 1) * sizeof(char));
if (strcp == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
strcp[i] = str[i];
}
strcp[i] = '\0';
return (strcp);
}

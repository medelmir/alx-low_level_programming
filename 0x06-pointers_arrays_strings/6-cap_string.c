#include "main.h"
/**
* cap_string - Capitalizes all words of a string.
* @str: The string to be capitalized.
*
* Return: A pointer to the changed string.
*/
char *cap_string(char *str)
{
int i;
int len = 0;
while (str[len] != '\0')
{
len++;
}
if (len > 0 && (str[0] >= 'a' && str[0] <= 'z'))
{
str[0] = str[0] - 'a' + 'A';
}
for (i = 1; i < len; i++)
{
if (str[i-1] == ' ' || str[i-1] == '\t' || str[i-1] == '\n' || str[i-1] == ',' ||str[i-1] == ';' || str[i-1] == '.' || str[i-1] == '!' || str[i-1]
== '?' ||str[i-1] == '"' || str[i-1] == '(' || str[i-1] == ')' || str[i-1] == '{' ||str[i-1] == '}')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 'a' + 'A';
}
}
}
return str;
}

#include "main.h"
/**
*  wildcmp - function compares two strings and returns 1 s1==s2 || 0 s1!=s2
*  @s1: param
*  @s2: param
*  Return: 1 or 0
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s2 == '\0')
{
return (0);
}
if (*s2 == '*')
{
if (wildcmp(s1, s2 + 1))
{
return (1);
}
if (*s1 != '\0' && wildcmp(s1 + 1, s2))
{
return (1);
}
}
if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}

#include "main.h"
/**
* _atoi -  convert a string to an integer
* @s : parma
* Return: num  number
*
*/
int _atoi(char *s)
{
int sign = 1;
int num = 0;
int digit_found = 0;
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
{
sign = -sign;
}
else if (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0') * sign;
digit_found = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
{
break;
}
}
else if (digit_found)
{
break;
}
}
return (num);
}

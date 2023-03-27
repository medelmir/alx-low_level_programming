#include "main.h"
/**
* puts_half - that prints half of a string, followed by a new line.
* @str : pointer
*
*
*/
void puts_half(char *str)
{
int len = 0;
while (str[len] != '\0')
{
len++;
}
int n = (len % 2 == 0) ? len / 2 : (len - 1) / 2;
for (int i = n; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

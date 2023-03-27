#include "main.h"
/**
* puts_half - that prints half of a string, followed by a new line.
* @str : pointer
*
*
*/
void puts_half(char *str)
{
int half;
int length = 0;
while (*str != '\0')
{
length++;
str++;
}
half = (length - 1) / 2;
str = str - half;
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');

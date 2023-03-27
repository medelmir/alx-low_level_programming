#include "main.h"
/**
* puts_half - that prints half of a string, followed by a new line.
* @str : pointer
*
*
*/
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
int start;
while (str[len] != '\0')
{
len++;
}
start = len / 2;
if (len % 2 != 0)
{
start = (len - 1) / 2;
}
printf("%s\n", str + start);
}

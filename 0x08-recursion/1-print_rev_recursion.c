#include "main.h"
#include <stdio.h>
/**
* _print_rev_recursion - function that prints a string in reverse
* @s: param
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
}
if (*s != '\n')
{
printf("%c", *s);
}
}

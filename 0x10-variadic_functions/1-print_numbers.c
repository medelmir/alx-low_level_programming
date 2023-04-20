#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by \n
 * @separator: param
 * @n: param
 * @...: param
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);
if (separator != NULL)
{
printf("%d", va_arg(args, int));
for (i = 1 ; i < n; i++)
{
printf("%s%d", separator, va_arg(args, int));
}
va_end(args);
printf("\n");
}
}

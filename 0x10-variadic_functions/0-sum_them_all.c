#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: param
 * @...: param
 * Return: sum of all its parameterso,0
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum;
va_list ap;
sum = 0;
if (n == 0)
return (0);
va_start(ap, n);
for (i = 0; i < n; i++)
{
sum = sum + va_arg(ap, int);
}
va_end(ap);
return (sum);
}

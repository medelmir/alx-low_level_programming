#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings, followed by \n.
 * @separator: param
 * @n: param
 * @...:param
 * Retrun: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
char *str;
if (!n)
{
printf("\n");
return;
}
va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}

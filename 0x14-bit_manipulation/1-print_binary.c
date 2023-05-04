#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be printed in binary
 * Return: void
*/
void print_binary(unsigned long int n)
{
char c;
if (n == 0)
{
_putchar('0');
return (0);
}
if (n == 1)
{
_putchar('1');
return (0);
}
print_binary(n >> 1);
if (n & 1)
{
c = '1';
}
else
{
c = '0';
}
_putchar(c);
}


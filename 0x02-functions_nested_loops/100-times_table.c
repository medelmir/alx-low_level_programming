#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
int i, j, k;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = j * i;
if (j == 0)
{
putchar (k + '0');
}
if (k < 10 && j != 0)
{
putchar (',');
putchar (' ');
putchar (' ');
putchar (k + '0');
}
else if (k >= 10 && k < 100)
{
putchar (',');
putchar (' ');
putchar ((k / 10) + '0');
putchar ((k % 10) + '0');
}
else if (k >= 100)
{
putchar(',');
putchar(' ');
putchar((k / 100) + '0');
putchar(((k / 10) % 10) + '0');
putchar((k % 10) + '0');
}
}
putchar ('\n');
}

#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
for (a = '0' ; a <= '9' ; a++)
{
if (a != '9')
{
putchar(a);
putchar(',');
putchar(' ');
}
else
{
putchar(a);
}
}
putchar('\n');
return (0);
}

#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char r;
for (r = '0' ; r <= '9' ; r++)
{
putchar(r);
}
for (r = 'a' ; r <= 'f' ; r++)
{
putchar(r);
}
putchar('\n');
return (0);
}

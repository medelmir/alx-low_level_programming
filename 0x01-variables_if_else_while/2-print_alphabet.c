#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char r;
for (r = 'a' ; r <= 'z' ; r++)
{
putchar(r);
}
putchar('\n');
return (0);
}

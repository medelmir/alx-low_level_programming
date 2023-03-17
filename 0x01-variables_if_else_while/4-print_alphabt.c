#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,and then in uppercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char r;
for (r = 'a' ; r <= 'z' ;)
{
if (r == 'q')
{
r++;
}
if (r == 'e')
{
r++;
}
else
{
putchar(r);
r++;
}
}
putchar('\n');
return (0);
}

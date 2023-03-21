#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
* followed by a new line
*/
void print_alphabet_x10(void)
{
int n;
char z;
for (n = 0 ; n < 10 ; n++)
{
for (z = 'a'; z <= 'z' ; z++)
{
_putchar (z);
}
_putchar ('\n');
}
}

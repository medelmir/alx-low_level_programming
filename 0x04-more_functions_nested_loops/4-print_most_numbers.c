#include "main.h"
/**
* print_most_numbers - prints the numbers, from 0 to 9 except 2 and 4
*/
void print_most_numbers(void)
{
int a;
for (c = '0' ; c <= '9' ; c++)
{
if ((c == '2') || (c == '4'))
{
c++;
}
_putchar(c);
}
_putchar('\n');
}

#include "main.h"
/**
* more_numbers - print more numbers
*
**/
void more_numbers(void)
{
int i, j;
char ch;    
for (i = 1; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
{
ch = '1';  
putchar(ch);
}
ch = j % 10 + '0';
putchar(ch);
}
putchar('\n');
}
}

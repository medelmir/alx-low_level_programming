#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - program that generates random valid
* passwords for the program 101-crackme
* Return: Always 0 (Success)
*/
int main(void)
{
srand(time(NULL));
int sum;
int last_digit;
int i;
for (i = 0; i < 100; i++)
{
int digit = rand() % 10;
sum += digit;
putchar(digit + '0');
}
last_digit = (2772 - sum) % 10;
putchar(last_digit + '0');
return (0);
}

#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * 3 multiples print Fizz instead of the number
 * 5 print Buzz instead of number
 * 3 & 5 print FizzBuzz
 * Return: Always 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i == 100)
printf("Buzz");
else if ((i % 3 == 0) && (i % 5 == 0))
printf("FizzBuzz ");
else if (i % 3 == 0)
printf("Fizz ");
else if (i % 5 == 0)
printf("Buzz ");
else
printf("%d ", i);
}
printf("\n");
return (0);
}

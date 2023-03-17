#include <time.h>
#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
for (a = 0 ; a < 10 ; a++)
{
printf("%d", a);
}
printf("\n");
return (0);
}

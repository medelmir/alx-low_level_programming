#include "main.h"
/**
* is_prime_number - function that returns 1 if  is a prime number, || return 0
* @n:param
* Return:int
*/
int is_prime_number(int n)
{
if (n < 2)
return (0);
int i = 2;
while (i <= n / 2)
{
if (n % i == 0)
{
return (is_prime_number(n - 1));
}
i++;
}
return (1);
}

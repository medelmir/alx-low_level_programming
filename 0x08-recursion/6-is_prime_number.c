#include "main.h"
/**
* validate - checks to see if number is prime
* @m:param
* @k:param
* Return:int
*/
int validate(int m, int k)
{
if (k > m / 2)
return (1);
if (m % k == 0)
return (0);
return (validate(m, k + 1));
}
/**
* is_prime_number - function that returns 1 if  is a prime number, || return 0
* @n:param
* Return:int
*/
int is_prime_number(int n)
{
if (n < 2)
return (0);
return (validate(n, 2));
}

#include "main.h"
/**
 * validate - checks for the square root
 * @m:param
 * @n:param
 * Return: int
 */
int validate(int m, int n)
{
if (m * m == n)
{
return (m);
}
if (m * m > n)
return (-1);
return (validate(m + 1, n));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: param
 * Return: int  or -1
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (validate(1, n));
}

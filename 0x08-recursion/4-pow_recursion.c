#include <stdio.h>
/**
* _pow_recursion - function that returns the value of x^y.
* @x:param
* @y:param
* Return:int
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 1)
return (x);
if (y == 0)
return (1);
else
{
return (x * _pow_recursion(x, y - 1));
}
}

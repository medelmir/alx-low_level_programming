#include <stdio.h>
#include <stdlib.h>
/**
 * main - finds and prints the largest prime factor
 *
 * Return: Always 0
 */
int main(void)
{
long long n = 1231952;
long long maxPrime = -1;
while (n % 2 == 0)
{
maxPrime = 2;
n >>= 1;
}
for (int i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
maxPrime = i;
n = n / i;
}
}
if (n > 2)
maxPrime = n;
printf("%lld\n", maxPrime);
return (0);
}

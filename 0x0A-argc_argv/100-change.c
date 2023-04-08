#include <stdio.h>
#include <stdlib.h>
/**
* main - program that prints the minimum number of coins to make change
* for an amount of money
* @argc: int
* @argv: list
* Return: 1 if argc < 2 or O if cents < 0 , otherwise 0
*/
int main(int argc, char *argv[])
{
int cents;
int coin_values[5] = {25, 10, 5, 2, 1};
int i;
int num_coins;
i = 0;
num_coins = 0;
if (argc < 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
while (i < 5)
{
while (cents >= coin_values[i])
{
cents = cents - coin_values[i];
num_coins++;
}
i++;
}
printf("%d\n", num_coins);
return (0);
}

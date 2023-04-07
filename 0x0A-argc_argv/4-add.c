#include <stdio.h>
#include <stdlib.h>
/**
* main - program that adds positive numbers
* @argc: int
* @argv: list
* Return: 1 or 0
*
*
*/
int main(int argc, char *argv[])
{
int i;
int a;
int b;
if (argc - 1 == 0)
{
printf("0\n");
}
else
{
for (i = 0 ; i < argc ; i++)
{
if (*argv[i] >= 'a' && *argv[i] <= 'z')
{
printf("Error\n");
return (1);
}
}
for (i = 0 ; i < argc ; i++)
{
b = atoi(argv[i]);
a += b;
}
printf("%d\n", a);
}
return (0);
}

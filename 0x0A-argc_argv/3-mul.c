#include <stdio.h>
#include <stdlib.h>
/**
* main - program that multiplies two numbers
* @argc: int
* @argv: list
* Return: 1 if argc < 2 , otherwise 0
*/
int main(int argc, char *argv[])
{
int i;
int k;
int z;
(void)*argv;
if (argc - 1 != 2)
{
printf("Error\n");
return (1);
}
else
{
i = atoi(argv[1]);
k = atoi(argv[2]);
z = i *k;
printf("%d\n", z);
}
return (0);
i}

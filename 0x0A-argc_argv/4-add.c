#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - program that adds positive numbers
* @argc: int
* @argv: list
* Return: 1 if argc - 1==0  or 0 otherwise
*/
int main(int argc, char *argv[])
{
int result;
char *s;
int i;
result = 0;
if (argc - 1 == 0)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
s = argv[i];
while (*s)
{
if (!isdigit(*s))
{
printf("Error\n");
return (1);
}
s++;
}
result += atoi(argv[i]);
}
printf("%d\n", result);
return (0);
}

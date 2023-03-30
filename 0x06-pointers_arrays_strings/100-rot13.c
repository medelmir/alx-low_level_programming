#include "main.h"
/**
* rot13 - encoder rot13
* @result: pointer to string params
*
* Return: result
*/
char *rot13(char *result)
{
int i;
int j;
char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (j = 0 ; result[i] != '\0' ; i++)
{
for (i = 0; i < 52; i++)
{
if (result[j] == rot13[i])
{
result[j]  = ROT13[i];
break;
}
}
}
return (result);
}

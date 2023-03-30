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
char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
while (*result)
{
for (i = 0; i < 52; i++)
{
if (*result == rot13[i])
{
*result = ROT13[i];
break;
}
}
result++;
}
return (result);
}

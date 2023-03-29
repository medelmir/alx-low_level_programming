#include "main.h"
/**
* leet - encode into 1337speak
* @src: input value
* Return: src value
*/
char *leet(char *src)
{
int len = 0;
int i;
while (src[len] != '\0')
{
len++;
}
for (i = 0 ; i < len ; i++)
{
src[i] = (src[i] == 'a' || src[i] == 'A') ? '4' : src[i];
src[i] = (src[i] == 'e' || src[i] == 'E') ? '3' : src[i];
src[i] = (src[i] == 'o' || src[i] == 'O') ? '0' : src[i];
src[i] = (src[i] == 't' || src[i] == 'T') ? '7' : src[i];
src[i] = (src[i] == 'l' || src[i] == 'L') ? '1' : src[i];
}
return (src);
}

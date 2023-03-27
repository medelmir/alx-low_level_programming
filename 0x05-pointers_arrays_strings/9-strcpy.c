include  "main.h"
/**
* _strcpy - copies the string pointed to by src, including  (\0)
*  @dest : dest param
*  @src : src param
*  Return: dest string
*
*/
char *_strcpy(char *dest, char *src)
{
int len = 0;
int i;
while (src[len] != '\0')
{
len++;
}
len = len + 1;
for (i = 0 ; i < len ; i++)
{
dest[i] = src[i];
}
return (dest);
}

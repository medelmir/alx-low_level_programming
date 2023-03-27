#include "main.h"
/**
* rev_string - that reverses a string.
*  @s :pointer
*
*
*/

void rev_string(char *s)
{
int len = 0;
int i;
while (s[len] != '\0')
{
len++;
}
for (i = 0; i < len / 2; i++)
{
char temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}

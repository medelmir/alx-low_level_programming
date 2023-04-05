#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* palihelp - function that checks if a string is a palindrome
* @s: param
* @m: param
* @e: param
* Return: int
**/
int palihelp(char *s, int m, int e)
{
if (m >= e)
return (1);
if (s[m] != s[e])
return (0);
return (palihelp(s, m + 1, e - 1));
}
/**
* is_palindrome - check if s is palindrome
* @s: param
* Return: int
*/
int is_palindrome(char *s)
{
int len = strlen(s);
if (len == 0 || len == 1)
return (1);
return (palihelp(s, 0, len - 1));
}

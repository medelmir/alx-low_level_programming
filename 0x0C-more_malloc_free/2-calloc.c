#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* _calloc - function that allocates memory for an array
*  @nmemb: param
*  @size: param
*  Return: pointer to array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *rs;
if (nmemb == 0 || size == 0)
return (NULL);
rs = malloc(nmemb * size);
if (result == NULL)
return (NULL);
memset(rs, 0, nmemb * size);
return (rs);
}

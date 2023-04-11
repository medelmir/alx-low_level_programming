#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dim array
 * @width: param
 * @height: pram
 * Return: pointer to 2 dim array
 */
int **alloc_grid(int width, int height)
{
int **tab;
int a, b;
if (width <= 0 || height <= 0)
return (NULL);
tab = malloc(sizeof(int *) * height);
if (tab == NULL)
return (NULL);
for (a = 0; a < height; a++)
{
tab[a] = malloc(sizeof(int) * width);
if (tab[a] == NULL)
{
for (; a >= 0; a--)
free(tab[a]);
free(tab);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
tab[a][b] = 0;
}
return (tab);
}

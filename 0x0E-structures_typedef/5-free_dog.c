#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free the dog
 * @d: param
 * Return: void
*/
void free_dog(dog_t *d)
{
if (d)
{
if (d->name)
free(d->name);
if (d->owner)
free(d->owner);
free(d);
}
}

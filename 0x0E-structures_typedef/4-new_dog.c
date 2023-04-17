#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - a function that creates a new dog
 * @name: param
 * @age: param
 * @owner: param
 * Return: struct pointer or null
*/
dog_t *new_dog(char *name, float age, char *owner)
{
if (!name || !owner || age < 0)
return (NULL);
dog_t *dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (strlen(name) + 1));
if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizof(char) * (strlen(owner) + 1));
if ((*dog).owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->name = strcopy(dog->name, name);
dog->age = age;
dog->name = strcopy(dog->owner, owner);
return (dog);
}

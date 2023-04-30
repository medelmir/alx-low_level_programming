#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the first element of the list
 * Return: the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *current;
listint_t *next;
size_t count = 0;
if (!h || !*h)
return (0);
current = *h;
while (current)
{
count++;
next = current->next;
free(current);
if (next >= current)
break;
current = next;
}
*h = NULL;
return (count);
}


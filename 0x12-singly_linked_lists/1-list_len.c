#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list_t.
 * @h: pointer to the list_t.
 * Return: the number of nodes.
*/
size_t list_len(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}


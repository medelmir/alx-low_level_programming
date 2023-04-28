#include "lists.h"
/**
 * listint_len - number of elements in a linked listint_t
 * @h: pointer to list
 * Return: number of elements in a linked listint_t
*/
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}


#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added.
 * @n: data to be added to the new node
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i;
dlistint_t *temp, *new_node;
if (h == NULL)
return (NULL);
if (idx == 0)
return (add_dnodeint(h, n));
temp = *h;
for (i = 0; i < idx - 1; i++)
{
if (temp == NULL)
return (NULL);
temp = temp->next;
}
if (temp->next == NULL)
return (add_dnodeint_end(h, n));
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = temp->next;
new_node->prev = temp;
temp->next->prev = new_node;
temp->next = new_node;
return (new_node);
}

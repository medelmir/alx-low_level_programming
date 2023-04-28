#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the first node in the list
 * @idx: index of the node, starting at 0
 * @n: data to insert in the new node
 * Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *temporary, *new;
if (head == NULL)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
temporary = *head;
for (i = 0; i < idx - 1; i++)
{
if (temporary == NULL)
{
free(new);
return (NULL);
}
temporary = temporary->next;
}
new->next = temporary->next;
temporary->next = new;
return (new);
}


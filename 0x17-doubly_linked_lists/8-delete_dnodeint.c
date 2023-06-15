#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer to head of list.
 * @index: index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp = *head;
unsigned int i = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = tmp->next;
if (tmp->next != NULL)
tmp->next->prev = NULL;
free(tmp);
return (1);
}
while (tmp != NULL)
{
if (i == index)
{
tmp->prev->next = tmp->next;
if (tmp->next != NULL)
tmp->next->prev = tmp->prev;
free(tmp);
return (1);
}
tmp = tmp->next;
i++;
}
return (-1);
}

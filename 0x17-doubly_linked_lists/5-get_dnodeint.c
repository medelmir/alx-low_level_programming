#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node to be returned
 * Return: the nth node of a dlistint_t linked list.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
dlistint_t *temp;
temp = head;
for (i = 0; i < index; i++)
{
if (temp == NULL)
return (NULL);
temp = temp->next;
}
return (temp);
}

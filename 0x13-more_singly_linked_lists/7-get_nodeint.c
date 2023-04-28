#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: pointer to the first node in the list
 * @index: index of the node, starting at 0
 * Return: the nth node of a listint_t linked list.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *temp;
temp = head;
for (i = 0; i < index; i++)
{
if (temp == NULL)
return (NULL);
temp = temp->next;
}
return (temp);
}


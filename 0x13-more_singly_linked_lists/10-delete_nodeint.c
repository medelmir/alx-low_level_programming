#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: pointer to the first node in the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{ unsigned int i;
listint_t *temporary1, *temporary2;
if (head == NULL || *head == NULL)
return (-1);
temporary1 = *head;
if (index == 0)
{
*head = temporary1->next;
free(temporary1);
return (1);
}
for (i = 0; i < index - 1; i++)
{
if (temporary1 == NULL)
return (-1);
temporary1 = temporary1->next;
}
temporary2 = temporary1->next;
temporary1->next = temporary2->next;
free(temporary2);
return (1);
}


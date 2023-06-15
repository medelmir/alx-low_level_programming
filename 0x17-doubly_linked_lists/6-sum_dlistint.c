#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to head of list
 * Return: sum of all data (n), or 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
if (head == NULL)
return (0);
while (head->prev != NULL)
head = head->prev;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}

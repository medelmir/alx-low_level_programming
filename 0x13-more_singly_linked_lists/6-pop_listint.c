#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t
 * and returns the head node’s data (n).
 * @head: pointer to the first node in the list
 * Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;
if (*head == NULL)
return (0);
temp = *head;
n = temp->n;
*head = temp->next;
free(temp);
return (n);
}


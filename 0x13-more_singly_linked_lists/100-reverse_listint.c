#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the first node in the list.
 * Return: pointer to the first node in the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous = NULL;
listint_t *next = NULL;
while (*head != NULL)
{
next = (*head)->next;
(*head)->next = previous;
previous = *head;
*head = next;
}
*head = previous;
return (*head);
}


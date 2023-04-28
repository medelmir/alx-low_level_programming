#include "lists.h"
/**
 * add_nodeint -  adds a new node at the beginning of a listint_t
 * @head: pointer to a pointer to a struct
 * @n: int
 * Return: pointer to a struct
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node;
node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);
node->n = n;
node->next = *head;
*head = node;
return (node);
}


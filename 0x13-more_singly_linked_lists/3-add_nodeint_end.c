#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 * @head: pointer to a pointer to a struct
 * @n: int
 * Return: pointer to a struct
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node, *last_node;
node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);
node->n = n;
if (*head == NULL)
{
*head = node;
return (node);
}
last_node = *head;
while (last_node->next != NULL)
last_node = last_node->next;
last_node->next = node;
return (node);
}


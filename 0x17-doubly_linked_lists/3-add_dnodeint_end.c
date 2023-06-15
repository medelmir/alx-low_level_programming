#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head of the list
 * @n: data to be added to the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *temp;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
if (*head == NULL)
{
new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;
*head = new_node;
return (*head);
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
new_node->n = n;
new_node->next = NULL;
new_node->prev = temp;
temp->next = new_node;
return (new_node);
}

#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t.
 * @head: pointer to the head of the list_t.
 * @str: string to be added to the list_t.
 * Return: pointer to the new node.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *node;
unsigned int i;
node = malloc(sizeof(list_t));
if (node == NULL)
return (NULL);
node->str = strdup(str);
for (i = 0; str[i] != '\0'; i++)
;
node->len = i;
node->next = *head;
*head = node;
return (node);
}


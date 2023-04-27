#include "lists.h"
/**
 * add_node_end -  adds a new node at the end of a list_t.
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 * Return: pointer to the head of the list
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *node;
list_t *last_node;
int i;
node = malloc(sizeof(list_t));
if (node == NULL)
return (NULL);
node->str = strdup(str);
for (i = 0; str[i] != '\0'; i++)
;
node->len = i;
node->next = NULL;
if (*head == NULL)
{
*head = node;
return (*head);
}
last_node = *head;
while (last_node->next != NULL)
last_node = last_node->next;
last_node->next = node;
return (*head);
}


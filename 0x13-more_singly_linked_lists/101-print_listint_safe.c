#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the first element of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t i = 0;
const listint_t *node = head, *prev = NULL;
if (!head)
{
return (0);
exit(98);
}
while (node)
{
printf("[%p] %d\n", (void *)node, node->n);
i++;
if (node > node->next || node == prev)
{
printf("-> [%p] %d\n", (void *)node->next, node->next->n);
break;
}
prev = node;
node = node->next;
}
return (i);
}


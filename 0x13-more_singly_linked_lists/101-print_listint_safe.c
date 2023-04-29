#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the first element of the list
 * Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{    
size_t i = 0;
if (head == NULL)
exit(98);
while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
i++;
}
return (i);
}


#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the first element of the list
 * Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
size_t i = 0;
const listint_t *temporary1 = head;
const listint_t *temporary2 = head;
if (head == NULL)
exit(98);
while (temporary1 != NULL)
{
printf("[%p] %d\n", (void *)temporary1, temporary1->n);
i++;
temporary1 = temporary1->next;
if (temporary1 >= temporary2)
{
printf("-> [%p] %d\n", (void *)temporary1, temporary1->n);
break;
}
}
return (i);
}


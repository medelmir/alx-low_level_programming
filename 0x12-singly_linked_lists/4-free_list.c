#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to the list to be freed
 * Return: void
*/
void free_list(list_t *head)
{
list_t *list;
while (head != NULL)
{
list = head;
head = head->next;
free(list->str);
free(list);
}
}


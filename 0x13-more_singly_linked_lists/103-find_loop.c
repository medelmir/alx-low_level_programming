#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the head of the list.
 * Return: The address where the loop starts, or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;
if (!head)
return (NULL);
slow = head->next;
fast = head->next->next;
while (fast && fast->next)
{
if (slow == fast)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
slow = slow->next;
fast = fast->next->next;
}
return (NULL);
}


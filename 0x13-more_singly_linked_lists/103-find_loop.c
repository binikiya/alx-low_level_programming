#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - finds a loop in a listint_t list
 * @head: first element
 * Return: address of the node
 */

listint_t *find_listint_loop(listint_t *head)
{
struct listint_s *slow = head;
struct listint_s *fast = head;
if (head == NULL)
return (NULL);
while (slow && fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
while (1)
{
slow = fast;
while (fast->next != slow && fast->next != head)
fast = fast->next;
if (fast->next == head)
break;
head = head->next;
}
return (head);
}
}
return (NULL);
}

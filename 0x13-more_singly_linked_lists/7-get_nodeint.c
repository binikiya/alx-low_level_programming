#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - prints Nth node of listint_t list
 * @head: first element
 * @index: index of the node
 * Return: n the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
while (head != NULL)
{
if (i == index)
return (head);
i++;
head = head->next;
}
return (NULL);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t list
 * @head: the first node of the list
 * @index: number of node we want to know
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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

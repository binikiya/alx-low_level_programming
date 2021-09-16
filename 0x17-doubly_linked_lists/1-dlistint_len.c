#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - prints the number of elements in a dlistint_t list
 * @h: first element of the list
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}

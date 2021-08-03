#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the element in linked listint_t list
 * @h: first element
 * Return: num of element
 */

size_t listint_len(const listint_t *h)
{
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}

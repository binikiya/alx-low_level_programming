#include <stdio.h>
#include "lists.h"

/**
 * list_len - return the num of elements in linked list
 * @h: first element
 * Return: number of element
 */

size_t list_len(const list_t *h)
{
int i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}

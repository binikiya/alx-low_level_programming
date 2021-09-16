#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints the elements of dlistint
 * @h: First elements of the list
 * Return: the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t i = 0;
while (h != NULL)
{
printf("%d", h->n);
i++;
h = h->next;
printf("\n");
}
return (i);
}

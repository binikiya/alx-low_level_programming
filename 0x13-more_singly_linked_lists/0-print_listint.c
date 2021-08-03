#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of listint_t list
 * @h: first element
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
int i = 0;
while (h != NULL)
{
{
printf("%d", h->n);
i++;
h = h->next;
printf("\n");
}
}
return (i);
}

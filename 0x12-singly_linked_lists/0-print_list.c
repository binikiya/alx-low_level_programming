#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements of list_t
 * @h: first element
 * Return: number of node
 */

size_t print_list(const list_t *h)
{
int i = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)");
h = h->next;
i++;
}
else
{
printf("[%d] %s", h->len, h->str);
i++;
h = h->next;
printf("\n");
}
}
return (i);
}

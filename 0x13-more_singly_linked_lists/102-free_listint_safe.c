#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - free a listint_t list
 * @h: first element
 * Return: The size of the list that was free d
 */

size_t free_listint_safe(listint_t **h)
{
struct listint_s *temp;
struct listint_s *aux;
size_t i;
i = 0;
temp = *h;
if (h == NULL)
return (0);
while (temp != NULL)
{
i++;
aux = temp;
temp = temp->next;
free(aux);
if (aux < temp)
break;
*h = NULL;
}
return (i);
}

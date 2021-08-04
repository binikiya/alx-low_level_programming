#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: first element
 */

size_t free_listint_safe(listint_t **h)
{
struct listint_s *temp = NULL;
struct listint_s *new = NULL;
size_t i = 0;
temp = *h;
if (h == NULL)
return (0);
while (temp != NULL)
{
i++;
new = temp;
temp = temp->next;
free(new);
if (new < temp)
break;
*h = NULL;
}
return (i);
}

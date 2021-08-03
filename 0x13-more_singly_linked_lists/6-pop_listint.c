#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the node of a listint_t list
 * @head: first element
 * Return: 0
 */

int_listint(listint_t **head)
{
struct listint_s *temp = NULL;
int i;
if (*head == NULL)
return (0);
temp = *head;
i = temp->n;
*head = *temp->next;
free(temp);
return (i);
}

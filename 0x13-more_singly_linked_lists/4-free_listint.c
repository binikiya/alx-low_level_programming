#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: first element
 */

void free_listint(listint_t *head)
{
struct listint_s *temp = NULL;
struct listint_s *new = NULL;
temp = head;
while (temp != NULL)
{
new = temp->next;
free(temp);
temp = new;
}
head = NULL;
}

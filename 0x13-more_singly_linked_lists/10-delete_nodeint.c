#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete a new node at a given posion
 * @head: first node
 * @index: index where the new node should be deleted
 * Return: value of n node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
struct listint_s *temp = NULL;
struct listint_s *temp2 = NULL;
int count;
count = 0;
i = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
temp = *head;
*head = temp->next;
free(temp);
return (1);
}
else
{
temp = *head;
while (i <= index && temp != NULL)
{
if (i == (index - 1))
{
temp2 = temp->next->next;
free(temp->next);
temp->next = temp2;
count = 1;
break;
}
i++;
temp = temp->next;
}
}
if (count == 0)
return (-1);
return (1);
}

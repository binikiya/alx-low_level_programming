#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint -reverse a listint_t list
 * @head: first element
 * Return: the value of n node
 */

listint_t *reverse_listint(listint_t **head)
{
struct listint_s *next = NULL;
struct listint_s *prev = NULL;
if (*head == NULL)
return (NULL);
while (*head != NULL)
{
next = (*head)->next;
(*head)->next = prev;
prev = (*head);
(*head) = next;
}
(*head) = prev;
return (*head);
}

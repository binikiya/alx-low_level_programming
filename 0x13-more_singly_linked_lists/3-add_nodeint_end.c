#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of listint_t list
 * @head: first element
 * @n: integer
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
struct listint_s *temp = NULL;
struct listint_s *new = NULL;
new = (struct listint_s *)malloc(sizeof(struct listint_s));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new;
}
return (new);
}
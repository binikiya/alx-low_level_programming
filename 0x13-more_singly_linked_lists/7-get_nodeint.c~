#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a new node at the beggining of listint_t list
 * @head: first element
 * @n: integer
 * Return: address of the new element
 */

listint_t add_nodeint(listint_t **head, const int n)
{
struct listint_s *temp = NULL;
temp = (struct listint_s *)malloc(sizeof(struct listint_s));
if (temp == NULL)
return (NULL);
temp->n = n;
temp->next = *head;
*head = temp;
return (temp);
}

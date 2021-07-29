#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - it is a function that free list_t
 * @head: the first element
 * Return: no
 */
void free_list(list_t *head)
{
struct list_s *temp = NULL;
struct list_s *aux = NULL;
temp = head;
while (temp != NULL)
{
aux = temp->next;
free(temp->str);
free(temp);
temp = aux;
}
head = NULL;
}

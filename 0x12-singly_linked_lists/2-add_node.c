#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add nodes at the beggining of a list_t
 * @head: address first element
 * @str: to be printed
 * Return: address of the new element or null
 */

list_t *add_node(list_t **head, const char *str)
{
struct list_s *temp = NULL;
int i = 0;
temp = (struct list_s *)malloc(sizeof(struct list_s));
if (temp == NULL)
return (NULL);
temp->str = strdup(str);
while (str[i] != '\0')
{
i++;
}
temp->len = i;
temp->next = *head;
*head = temp;
return (temp);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t list
 * @head: first element
 * Return: the num of node in the list
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *temp = NULL;
const listint_t *temp2 = NULL;
int i, count;
i = 0;
temp = head;
while (temp)
{
printf("[%p] %d\n", (void *)temp, temp->n);
i++;
temp = temp->next;
temp2 = head;
count = 0;
while (count < i)
{
if (temp == temp2)
{
printf("-> [%p] %d\n", (void *)temp, temp->n);
return (i);
}
temp2 = temp2->next;
count++;
}
if (head == NULL)
exit(98);
}
return (i);
}

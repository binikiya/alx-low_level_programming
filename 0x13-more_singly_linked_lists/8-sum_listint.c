#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - prints the sum of add data n in listint_t lists
 * @head: first element
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
unsigned int sum = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
sum = head->n + sum;
head = head->next;
}
return (sum);
}

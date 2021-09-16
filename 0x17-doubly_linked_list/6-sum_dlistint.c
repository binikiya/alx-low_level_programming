#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) of the dlistint_t list
 * @head: the first element of the list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
unsigned int sum;
sum = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}

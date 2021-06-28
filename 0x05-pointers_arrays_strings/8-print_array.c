#include<stdio.h>
#include "holberton.h"

/**
 * print_array - prints n elements of an integer
 * @a: array
 * @n: times to be displayed
 */

void print_array(int *a, int *n)
{
int j;

j = 0;
while (j < n)
{
if (j != n - 1)
printf("%d, ", a[j]);
else
printf("%d", a[j]);
j++;
}
printf("\n");
}

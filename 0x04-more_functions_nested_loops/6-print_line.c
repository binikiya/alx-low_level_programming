#include<stdio.h>
#include "holberton.h"

/**
 * print_line - prints straight line
 * @n: the number that shows how many times the lines repeated
 */

void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}

#include<stdio.h>
#include "holberton.h"

/**
 * print_triangle - prints triangle with hash symbol
 * @size: size of triagle
 */

void print_triangle(int size)
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = size - i; j > 0; j--)
_putchar(' ');
for (j = 0; j < i; j++)
_putchar('#');
if (i == size)
continue;

_putchar('\n');
}
_putchar('\n');
}

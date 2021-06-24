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
for (j = 0; j < i; j++)
{
if ((j + i) < size)
_putchar(' ');
if ((j + i) >= size)
_putchar('#');
}
_putchar('\n');
}
if (i <= 0)
_putchar('\n');
}

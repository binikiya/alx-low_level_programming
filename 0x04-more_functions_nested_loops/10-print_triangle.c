#include<stdio.h>
#include "holberton.h"

/**
 * print_triangle - prints '#' triangle
 * @size: the number that shows size of triagle
 */

void print_triangle(int size)
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < i; j++)
{
_putchar('#');
}
_putchar('\n');
}
if (i <= 0)
_putchar('\n');
}

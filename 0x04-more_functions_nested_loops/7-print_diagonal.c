#include<stdio.h>
#include "holberton.h"

/**
 * print_diagonal - prints diagonal forward slash
 * @n: the number of times the character '\' should be printed
 */

void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}

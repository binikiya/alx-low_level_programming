#include<stdio.h>
#include "holberton.h"

/**
 *times_table - prints 9 times table of numbers
 */

void times_table(void)
{
int n1, n2, mult;

for (n1 = 0; n1 <= 9; n1++)
{
_putchar('0');
for (n2 = 1; n2 <= 9; n2++)
{
_putchar(',');
_putchar(' ');
mult = n1 * n2;
if (mult <= 9)
_putchar(' ');
_putchar(mult + '0');
}
_putchar('\n');
}
}

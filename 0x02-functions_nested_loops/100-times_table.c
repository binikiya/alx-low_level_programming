#include<stdio.h>
#include "holberton.h"

/**
 *print_times_table - prints time table start from 0 to n times
 *
 *@n: the number to be printed
 */

void print_times_table(int n)
{
int n1, n2, mult;
if(n >= 0 && n <= 15)
{
for (n1 = 0; n1 <= n; n1++)
{
_putchar('0');
for (n2 = 1; n2 <= n; n2++)
{
_putchar(',');
_putchar(' ');
mult = n1 * n2;
if (mult <= 99)
_putchar(' ');
if (mult <= 9)
_putchar(' ');
if (mult >= 100)
{
_putchar((mult / 100) + '0');
_putchar(((mult / 10) % 10) + '0');
}
else if (mult <= 99 && mult >= 10)
{
putchar((mult / 10) + '0');
}
_putchar((mult % 10) + '0');
}
_putchat('\n');
}
}
}

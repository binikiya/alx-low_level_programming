#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - prints the binary reperesentation of a num
 * @n: decimal
 */

void print_binary(unsigned long int n)
{
int i, bin, flag = 0;
if (n == 0)
_putchar('0');
for (i = 63; i >= 0; i--)
{
bin = n >> i;
if (bin != 0)
flag = 1;
if (flag != 0)
{
if (bin & 1)
_putchar('1');
else
_putchar('0');
}
}
}

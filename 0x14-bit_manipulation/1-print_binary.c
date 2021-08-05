#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - prints the binary reperesentation of a num
 * @n: decimal
 */

void print_binary(unsigned long int n)
{
int i, k, flag = 0;
if (n == 0)
{
_putchar('0');
return;
}
for (i = 63; i >= 0; i--)
{
k = n >> i;
if (k & 1)
{
flag = 1;
_putchar('1');
}
else if (flag == 1)
{
_putchar('0');
}
}
}

#include<stdio.h>
#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: integer number
 */

void print_number(int n)
{
char i, j;
int l;

if (n < 0)
{
_putchar('-');
i = ('0' - (n % 10));
n /= -10;
}
else
{
i = ((n % 10) + '0');
i /= 10;
}
l = 0;
while (n > 0)
{
l = l * 10 + (n % 10);
n /= 10;
}
while (l > 0)
{
j = ((l % 10) + '0');
_putchar(j);
r /= 10;
}
_putchar(i);
}

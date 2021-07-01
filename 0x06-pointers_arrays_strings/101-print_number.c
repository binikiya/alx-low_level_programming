#include<stdio.h>
#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: the num to be printed
 */

void print_number(int n)
{
char l, d;
int r;
if (n < 0)
{
_putchar('-');
l = ('0' - (n % 10));
n /= -10;
}
else
{
l = ((n % 10) + '0');
n /= 10;
}
r = 0;
while (n > 0)
{
r = r * 10 + (n % 10);
n /= 10;
}
while (r > 0)
{
d = ((r % 10) + '0');
_putchar(d);
r /= 10;
}
_putchar(l);
}

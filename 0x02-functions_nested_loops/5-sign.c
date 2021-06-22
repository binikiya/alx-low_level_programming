#include<stdio.h>
#include "holberton.h"

/**
 *print_sign - prints the sign of numbers
 *
 *@n: the num to be checked
 *
 *Return: returns either 1, or 0, or -1
 */

int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('+');
return (1);
}
}

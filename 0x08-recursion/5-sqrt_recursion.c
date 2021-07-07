#include <stdio.h>
#include "holberton.h"

/**
 * _sqrt_recursion - prints the natural square root of a number
 * @n: the number to be squared
 * Return: the square root of number
 */

int compare(int x, int y)
{
if (y * y == x)
return (y);
else if (y * y > x)
return (-1);
return (compare (x, y + 1));
}

int _sqrt_recursion(int n)
{
return (compare(n, 1));
}

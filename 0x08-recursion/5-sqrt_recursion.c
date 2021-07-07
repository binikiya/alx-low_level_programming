#include <stdio.h>
#include "holberton.h"

/**
 * _sqrt_recursion - prints the natural square root of a number
 * compare - compares the number
 * @x: the number to be checked
 * @y: the number that squared
 * @n: the number to be squared
 * Return: the square root of number
 */

int compare(int n, int y)
{
if (y * y == n)
return (y);
else if (y * y > n)
return (-1);
return (compare(n, y + 1));
}

int _sqrt_recursion(int n)
{
return (compare(n, 1));
}

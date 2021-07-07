#include <stdio.h>
#include "holberton.h"

/**
 * compare - compares the number
 * @y: couter to compare num
 * @n: original num
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

/**
 * _sqrt_recursion - prints squareroot of a number
 * @n: num
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
return (compare(n, 1));
}

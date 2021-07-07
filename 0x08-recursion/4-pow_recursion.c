#include<stdio.h>
#include "holberton.h"

/**
 * _pow_recursion - prints the value of x raised to the power of y
 * @x: the integer to be powered
 * @y: the integer to be power
 * Return: the power of number
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}

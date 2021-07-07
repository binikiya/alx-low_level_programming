#include <stdio.h>
#include "holberton.h"

/**
 * factorial - prints a factorial of a given number
 * @n: the number to be fact
 * Return: factorial of n
 */

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}

#include<stdio.h>
#include "holberton.h"

/**
 * is_prime_number - prints 1 if an integer is prime
 * @n: the num to be tested
 * Return: either 1 or 0
 */

int compare(int x, int y)
{
int c = 0;
if (y <= x)
{
if (x % y == 0)
c++;
return (c + compare(x, y + 1));
}
return (c);
}

int is_prime_number(int n)
{
if (compare(n, 1) == 2)
return (1);
else
return (0);
}

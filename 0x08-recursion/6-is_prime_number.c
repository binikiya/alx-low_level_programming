#include<stdio.h>
#include "holberton.h"

/**
 * is_prime_number - prints 1 if an integer is prime
 * compare - comares
 * @n: the num to be tested
 * @x: the num to be tested
 * @y: the num that devides
 * Return: either 1 or 0
 */

int compare(int n, int y)
{
int c = 0;
if (y <= n)
{
if (n % y == 0)
c++;
return (c + compare(n, y + 1));
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

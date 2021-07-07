#include<stdio.h>
#include "holberton.h"

/**
 * compare - compares
 * @n: original num
 * @y: counter to compare
 * Return: count
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

/**
 * is_prime_number - checks either an integer is prime or not
 * @n: the num
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
if (compare(n, 1) == 2)
return (1);
else
return (0);
}

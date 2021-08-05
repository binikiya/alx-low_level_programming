#include <stdio.h>
#include "holberton.h"

/**
 * git_bit - returns the value of a bit at a given index
 * @n: decimal
 * @index: index starting from 0
 * Return: index of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
int bin = 0, var = 0;
if (index > 63)
return (-1);
bin = (n >> index);
var = bin & 1;
if (var)
return (1);
else
return (0);
return (-1);
}

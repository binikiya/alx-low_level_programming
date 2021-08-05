#include <stdio.h>
#include "main.h"

/**
 * git_bit - returns the value of a bit at a given index
 * @n: decimal
 * @index: index starting from 0
 * Return: index of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
return (-1);
return (n >> index & 1);
}

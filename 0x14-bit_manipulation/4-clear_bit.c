#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - sets the value of bits to 0
 * @n: decimal
 * @index: index starting from 0
 * Return: index of bit
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1, var = 0;
if (index > 63)
return (-1);
var = *n & ~(mask << index);
*n = var;
return (1);
}

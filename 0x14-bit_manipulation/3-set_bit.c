#include <stdio.h>
#include "main.h"

/**
 * set_bit - returns the value of a bit at a given index
 * @n: decimal
 * @index: index starting from 0
 * Return: index of bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1, var = 0;
if (index > 63)
return (-1);
var = *n | (mask << index);
*n = var;
return (1);
}

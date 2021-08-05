#include <stdio.h>
#include "main.h"

/**
 * flip_bits - the num of bits you want to flip
 * @n: decimal 1
 * @m: decimal 2
 * Return: the num of bit tha i need to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
for (i = 0; i < 64; i++)
{
if (((n >> i) & 1) != ((m >> i) & 1))
count++;
}
return (count);
}

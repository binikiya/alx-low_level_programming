#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointing to 0 or 1
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int len = 0, count = 0, sum = 0;
if (b == NULL)
return (0);
len = _strlen(b);
while (len--)
{
if (b[len] != 48 && b[len] != 49)
return (0);
if (b[len] == 49)
sum += 1 << count;
count++;
}
return (sum);
}

/**
 * _strlen - returns length of string
 * @s: String to count
 * Return: length
 */

int _strlen(const char *ch)
{
int i = 0;
while (ch[i])
i++;
return (i);
}

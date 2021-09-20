#include<stdio.h>
#include "holberton.h"

/**
 * _islower - checks lowercase english characters
 *
 * @c: the character to be checked
 *
 * Return: return 1 if c is lower otherwise returns 0
 *
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

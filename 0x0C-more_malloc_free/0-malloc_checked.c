#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: string we need to dup
 * Return: pointer p
 */

void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}

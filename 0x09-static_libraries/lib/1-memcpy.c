#include <stdio.h>
#include "holberton.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: n bytes we wante to change
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

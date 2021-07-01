#include "holberton.h"

/**
 * *_strncpy - copies a string
 * @dest: first string pointer
 * @src: second string pointer
 * @n: the number of bytes to be copied
 * Returs: copy of string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
for (i = 0; (i < n && src[i] != 0); i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}

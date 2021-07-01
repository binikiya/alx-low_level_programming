#include<stdio.h>

/**
 * *_strncpy - copies a string
 * @dest: first string pointer
 * @src: second string pointer
 * @n: the number of bytes to be copied
 * Returs: copy of string
 */

char *_strncmp(char *dest, char *src, int n)
{
int i;
i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}

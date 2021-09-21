#include<stdio.h>

/**
 * *_memset - fills a memmory with a constant byte
 * @s: pointed pointer
 * @b: constant byte
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}

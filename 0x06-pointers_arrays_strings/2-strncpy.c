#include<stdio.h>

/**
 * *_strncpy - copies a string
 * @dest: char pointer
 * @src: char pointer
 * @n: limit
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
  int i = 0;
  for (i = 0; (i < n && src[i] != '\0'); i++)
    {
      dest[i] = src[i];
    }
  for (; i < n; i++)
    {
      dest[i] = '\0';
    }
  return (dest);
}

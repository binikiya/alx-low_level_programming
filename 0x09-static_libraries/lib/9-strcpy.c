#include<stdio.h>
#include "holberton.h"

/**
 * *_strcpy - copies a string
 * @dest: buffer pinted to
 * @src: string pinted by
 * Return: copy of string
 */

char *_strcpy(char *dest, char *src)
{
int i, j;
i = 0;
while (*(src + i) != '\0')
{
i++;
}
i++;
j = 0;
while (j < i)
{
dest[j] = src[j];
j++;
}
return (&*dest);
}

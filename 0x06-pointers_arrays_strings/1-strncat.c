#include<stdio.h>

/**
 * *_strncat - concatinates two string
 * @dest: first string pointer
 * @src: second string pointer
 * @n: bytes to copy from src to dest
 * Return: new concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i + j] = src[j];
j++;
}
return (dest);
}

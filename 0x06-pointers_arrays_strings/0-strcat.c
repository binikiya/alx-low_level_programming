#include<stdio.h>

/**
 * *_strcat - concatinates two string
 * @dest: first string pointer
 * @src: second string pointer
 * Return: concatinated string
 */

char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
return (dest);
}

#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *string_nconcat - prints two concatinated strigs
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *strnew = NULL;
unsigned int i, j, n1, n2;
n1 = 0;
n2 = 0;
unsigned int sign = n;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[n1] != '\0')
n1++;
while (s2[n2] != '\0')
n2++;
if (sign >= n2)
{
sign = n2;
strnew = malloc(sizeof(char) * (n1 + n2 + 1));
}
else
{
strnew = malloc(sizeof(char) * (n1 + n + 1));
}
if (strnew == NULL)
return (NULL);
for (i = 0; i < n1; i++)
{
strnew[i] = s1[i];
}
for (j = 0; j < sign; j++)
{
strnew[i++] = s2[j];
}
strnew[i++] = '\0';
return (strnew);
}

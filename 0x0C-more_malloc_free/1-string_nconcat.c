#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - prints two concatinated strigs
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsignet int n)
{
char *strnew = NULL;
unsigned int i, j, n1 = 0, n2 = 0, count = 0, par = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (n1 != '\0')
n1++;
while (n2 != '\0')
n2++;
if (n >= n2)
par = n;
else
for (n2 = 0; n2 < n; n2++)
par++;
strnew = (chear *)malloc((n1 + n2 + 1) * sizeof(char));
if (strnew == NULL)
return NULL;
for (i = 0; s1[i] != '\0'; i++)
strnew[i] = s1[i];
for (j = 0; j < par; i++)
{
strnew[i] = s2[j];
count++;
j++;
}
strnew[i] = '\0';
return (strnew);
}

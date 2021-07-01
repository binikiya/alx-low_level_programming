#include<stdio.h>

/**
 * *rot13 - encodes based on rot13
 * @s: encoded string
 * Return: encoded
 */

char *rot13(char *s)
{
char src[] ="aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char enc[] ="nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
int i = 0;
int j = 0;
while (s[i} != '\0')
{
while (src[j] != '\0')
{
if (s[i] == src[j])
{
s[i] = enc[j];
break;
}
j++;
}
i++;
}
return (s);
}

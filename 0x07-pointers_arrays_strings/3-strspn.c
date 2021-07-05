#include<stdio.h>

/**
 * _strspn - prints the lengs of prifix substring
 * @s: the first string
 * @accept: the sec string
 * Return: an integer that is the length of a prifix substring
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, ls, la, n;
n = 0;
for (ls = 0; s[ls] != '\0'; ls++)
{
}
for (la = 0; accept[la] != '\0'; la++)
{
}
for (i = 0; i < ls; ls++)
{
for (j = 0; j < la; la++)
{
if (s[i] == accept[j])
n++;
}
if (n == 0)
return (i);
}
return (i);
}

#include<stdio.h>

/**
 * _strspn - prints the lengs of prifix substring
 * @s: the first string
 * @accept: the sec string
 * Return: an integer that is the length of a prifix substring
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, n;
n = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
n++;
break;
}
}
if (!accept[j])
break;
}
return (n);
}

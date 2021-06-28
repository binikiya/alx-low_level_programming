#include<stdio.h>
#include "holberton.h"

/**
 * _atoi - converts string to int
 * @s: strint pointer to be converted
 * Return: converted integer
 */

int _atoi(char *s)
{
int i, j, ngt, a;
unsigned int e;

i = 0;
while (*(s + i) != '\0')
{
i++;
}
j = 0;
a = 10;
e = 0;
ngt = 0;
while (j < i)
{
if (s[j] == '-')
ngt += 1;
if (s[j] >= '0' && s[j] <= '9')
{
if (s[j + 1] >= '0' && s[j + 1] <= '9')
{
e += (s[j] - '0');
e *= a;
}
else
{
e += (s[j] - '0');
}
if (s[j + 1] < '0' || s[j + 1] > '9')
break;
}
j++;
}
if (ngt % 2 != 0)
return ((e) * -1);
else
return (e);
}

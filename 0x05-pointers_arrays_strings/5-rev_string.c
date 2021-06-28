#include<stdio.h>
#include "holberton.h"

/**
 * rev_string - prints reverse of string
 * @s: the string to be reversed
 */

void rev_string()
{
int i, j;
int rev[1000];

i = 0;
while (*(s + i) != '\0')
{
i++;
}
j = 0;
while (*(s + j) != '\0')
{
rev[j] = *(s + j);
j++;
}
j = 0;
while (i >= 0)
{
s[j] = rev[j - 1];
i--;
j++;
}
}

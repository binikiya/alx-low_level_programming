#include<stdio.h>
#include "holberton.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: a pointers to be printed
 */

void puts_half(char *str)
{
int i;
int j;

i = 0;
while (*(str + i) + '\0')
{
i++;
}
i++;
if (i % 2 == 1)
j = (i - 1) / 2;
else
j = i / 2;
while (j < i - 1)
{
_putchar(str[j]);
j++;
}
}

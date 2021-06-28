#include<stdio.h>
#include "holberton.h"

/**
 * puts2 - prints every character of a string followed by a new line
 * @str: a string to be displayed as a character
 */

void puts2(char *str)
{
int i, j;

i = 0;
while (*(str +i) != '\n')
{
i++;
}
j = 0;
while (j < i)
{
if (j % 2 == 0)
_putchar(str[j]);
j++;
}
_putchar('\n');
}

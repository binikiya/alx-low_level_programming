#include<stdio.h>
#include "holberton.h"

/**
 * print_rev - prints reverse of a string
 * @s: a string to be reversed
 */

void print_rev(char *s)
{
int i;
i = 0;
while (*(s + i) != '\0')
{
i++;
}
while(i > 0)
{
_putchar(*(s + i -1));
i--;
}
_putchar('\n');
}

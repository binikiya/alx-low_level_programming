#include<stdio.h>
#include "holberton.h"

/**
 * _puts - prints a string followed by a new line
 * @str: a character to be printed
 */

void _puts(char *str)
{
int i;
i = 0;
while (*(str + i) != '\0')
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}

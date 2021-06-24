#include<stdio.h>
#include "holberton.h"

/**
 * more_numbers - prints the number from 0 to 14 ten times
 */

void more_numbers(void)
{
int i, j;
i = 0;
while (i <= 9)
{
for (j = 0; j <= 14; j++)
{
_putchar(j + '0');
}
_putchar('\n');
}
_putchar('\n');
}

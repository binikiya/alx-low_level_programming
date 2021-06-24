#include<stdio.h>
#include "holberton.h"

/**
 * more_numbers - prints the number from 0 to 14 ten times
 */

void more_numbers(void)
{
  int i, j, m, n;
i = 0;
while (i <= 9)
{
for (j = 0; j <= 14; j++)
{
m = j / 10;
n = j % 10;
if (j >= 10)
_putchar(m + '0');
if (j == 10)
l = 0;
_putchar(n + '0');
}
_putchar('\n');
}
}

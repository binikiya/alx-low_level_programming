#include<stdio.h>
#include "holberton.h"

/**
 *main - prints lowercase english letters 10 times
 *
 *Return - always return 0
 */

void print_alphabet_x10(void)
{
int count = 1;
int ch;

while (count <= 10)
{
count++;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}

return (0);
}

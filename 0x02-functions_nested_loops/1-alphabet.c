#include<stdio.h>
#include "holberton.h"

/**
 *main - prints english lowercase alphabets
 *
 *Return: returns void
 */

void print_alphabet(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');

}

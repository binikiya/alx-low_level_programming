#include<stdio.h>
#include "holberton.h"

/**
 *main - prints lowercase english letters 10 times
 *
 *Return: returns void
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

}

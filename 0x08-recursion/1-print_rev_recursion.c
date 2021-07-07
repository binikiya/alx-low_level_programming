#include <stdio.h>
#include "holberton.h"

/**
 * _print_rev_recursion - print reverse of a string
 * @s: a sting to be reversed
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}

#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of a person
 * @f: print name as it is and UPPERCASE
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}

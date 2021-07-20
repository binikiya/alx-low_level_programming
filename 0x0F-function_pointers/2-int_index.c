#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches an integer
 * @array: array element
 * @size: size of array
 * @cmp: pointers to fun
 * Return: i
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size >= 0 && array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
{
if (cmp[array] != 0)
return (i);
}
}
return (-1);
}

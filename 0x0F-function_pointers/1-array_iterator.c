#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - run a fun
 * @array: array element
 * @size: size of array
 * @action: function to run
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != NULL && action != NULL)
for (i = 0; i < size; i++)
action(array[i]);
}

#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: array to print
 * @size: size of array
 *
 * return: void
 */
void print_array(int *array, size_t size)
{
size_t i = 0;
for ( ; i < size - 1; i++)
printf("%i, ", array[i]);
printf("%i\n", array[i]);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: poiter to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
size_t mid = size / 2;
int loc;
if (size == 0 || !array)
return (-1);
printf("Searching in array: ");
print_array(array, size);
if (size == 1 && array[0] != value)
return (-1);
if (size % 2  == 0)
mid -= 1;
if (array[mid] > value)
return (binary_search(array, mid, value));
else if (array[mid] < value)
{
if (size % 2  == 0)
mid = mid + 1;
loc = binary_search(array + mid + ((size  % 2 == 0) ? 0 : 1), mid, value);
if (loc == -1)
return (-1);
return (loc + mid);
}
return (mid);
}

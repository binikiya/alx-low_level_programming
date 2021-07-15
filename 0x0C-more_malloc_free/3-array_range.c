#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates array of string
 * @min: min num
 * @max: max num
 * Return: array pointer
 */

int *array_range(int min, int max)
{
int *arr = NULL;
int i, t, count;
count = 0;
if (min > max)
return (NULL);
t = (max - min) + 1;
arr = malloc(sizeof(int) * t);
if (arr != NULL)
{
for (i = min; i <= max; i++)
{
arr[count] = i;
count++;
}
return (arr);
}
return (NULL);
}

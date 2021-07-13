#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: size of array
 * @c: character to be created
 * Return: pointer to an array or null
 */

char *create_array(unsigned int size, char c)
{
char *ar = NULL;
unsigned int i;
if (size == 0)
{
return (NULL);
}
else
{
ar = malloc(sizeof(char) * size);
if (ar != NULL)
{
for (i = 0; i < size; i++)
{
ar[i] = c;
}
}
}
return (ar);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for array
 * @nmemb: size of array
 * @size: size of the type
 * Return: an array pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr = NULL;
unsigned int i, t;
char *f;
if (size == 0 || nmemb == 0)
return (NULL);
t = nmemb * size;
arr = malloc(t);
f = (char *)array;
if (f != NULL)
{
for (i = 0; i < t; i++)
f[i] = 0;
return (f);
}
return (NULL);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - reallocates the memory block
 * @ptr: ponters
 * @old_size: old size
 * @new_size: new size
 * Return: a pointer to an array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *arr = NULL;
char *p = NULL;
unsigned int i;
char *px = NULL;
if (ptr == NULL)
{
arr = malloc(new_size);
if (arr == NULL)
return (NULL);
return (arr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (old_size == new_size)
return (ptr);
p = malloc(new_size);
if (p != NULL)
{
px = (char *)ptr;
for (i = 0; i < old_size; i++)
p[i] = px[i];
free(ptr);
return (p);
}
return (NULL);
}

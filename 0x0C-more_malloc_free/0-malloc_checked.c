#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: string we need to dup
 * Return: pointer p
 */

void *malloc_checked(unsigned int b)
{
void *p = NULL;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}

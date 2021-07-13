#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - prints a pointer to two dimensional array
 * @width: width of array
 * @height: height of array
 * Return: pointer to 2-D dimension
 */

int **alloc_grid(int width, int height)
{
int **ar;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
ar = malloc(sizeof(int) * height);
if (ar == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
(ar + i) = (int *)malloc(sizeof(int) * width);
if (ar[i] == NULL)
{
while (i >= 0)
{
free(ar[i]);
i--;
}
free(ar);
ar = NULL;
return (ar);
}
for (j = 0; j < width; j++)
{
a[i][j] = 0;
}
}
return (ar);
}

#include<stdio.h>

/**
 * print_diagsums - prints the sum of two diagonal matrix arrays
 * @a: multidimentional array
 * @size: size of multidimentional array
 */

void print_diagsums(int *a, int size)
{
int i, sum, sum2;
sum = 0;
sum2 = 0;
for (i = 0; i < size * size;)
{
sum += a[i];
i = i + size + 1;
}
for (i = size - 1; i < (size * size) - 1;)
{
sum2 += a[i];
i += (size - 1);
}
printf("%d, %d\n", sum, sum2);
}

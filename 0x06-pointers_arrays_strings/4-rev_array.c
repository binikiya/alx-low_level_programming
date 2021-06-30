#include<stdio.h>

/**
 * reverse_array - reverses the content of array
 * @a: array to be reversed
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
int i, buffer;
i = 0;
buffer = 0;
while (i < n - 1)
{
buffer = a[i];
a[i] = a[n - 1];
a[n - 1] = buffer;
i++;
n--;
}
}

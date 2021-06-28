#include<stdio.h>

/**
 * swap_int - swap two integers
 * @a: the first number
 * @b: the second number
 */

void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}

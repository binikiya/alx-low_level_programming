#include<stdio.h>
#include "holberton.h"

/**
 *_abs - print the absolute value of integers
 *
 *Return: absolute values of integers
 */

int _abs(int n)
{
if (n < 0)
n *= -1;
return (n);
}

#include<stdio.h>
#include "holberton.h"

/**
 *largest_number - print the largest of three number
 *@a: 1st num
 *@b: 2nd num
 *@c: 3rd num
 *Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;
if (a >= b && a >= c)
largest = a;
else if (b >= a && b >= c)
largest = b;
else
largest = c;

return (0);
}

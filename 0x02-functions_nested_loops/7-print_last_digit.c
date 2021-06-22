#include<stdio.h>
#include "holberton.h"

/**
 *print_last_digit - prints last digit of integer
 *
 *@n: the number to be printed
 *
 *Return: return last digit of numbers
 */

int print_last_digit(int n)
{
if (n < 0)
n *= -1;
n %= 10;
_putchar(n + '0'); 
return (n);
}

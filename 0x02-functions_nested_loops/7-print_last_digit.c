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
int lastDigit;
if (n < 0)
n *= -1;
lastDigit = n % 10;
_putchar(lastDigit + '0'); 
return (lastDigit);
}

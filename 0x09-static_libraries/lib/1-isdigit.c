#include<stdio.h>

/**
 * _isdigit - checks the digit from 1 to 9
 *  @c: the number to be checked
 * Return: 1 or 0
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}

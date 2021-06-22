#include<stdio.h>
#include "holberton.h"

/**
 *_isalpha - returns 1 if upper or lowercase characters otherwise returns 0
 *
 *@c: the number to be checked
 *
 *Return: returns 1 or 0 based on the condition
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}

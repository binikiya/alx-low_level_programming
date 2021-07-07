#include <stdio.h>
#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: a string to be counted
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (_strlen_recursion(s + 1) + 1);
}
return (0);
}
  

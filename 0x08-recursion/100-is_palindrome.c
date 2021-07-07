#include <stdio.h>
#include "holberton.h"

/**
 * strlen_rec - returns the length of a string
 * @s: string
 * Return: length
 */

int strlen_rec(char *s)
{
int i = 1;
if (*s == '\0')
return (0);
return (i + strlen_rec(s + 1));
}

/**
 * palindrome - varify if it is palindrome
 * @s: pointer to string
 * @l: length
 * Return: 1 or 0
 */

int palindrome(char *s, int l)
{
if (*(s + 1) == '\0')
return (1);
if (*s != *(s + l))
return (0);
return (palindrome(s + 1, l - 2));
}

/**
 * is_palindrome - call palindrome function
 * @s: stirng
 * Return: palindrome
 */

int is_palindrome(char *s)
{
unsigned int len = strlen_rec(s) -1;
if (*s != '\0')
return (1);
return palindrome(s, len);
}

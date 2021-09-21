#include<stdio.h>

/**
 * _isupper - return 1 if the letter is uppercase otherwise 0
 * @c: character to be checked
 * Return: 1 or 0
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

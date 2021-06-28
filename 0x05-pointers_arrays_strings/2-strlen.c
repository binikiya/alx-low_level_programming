#include<stdio.h>

/**
 * _strlen - prints the length of string
 * @s: the string to be counted
 * Return: *s
 */

int _strlen(char *s)
{
int len;
len = 0;
while (*(s + len) != '\0')
{
len++;
}
return (len);
}

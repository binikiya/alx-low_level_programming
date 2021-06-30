#include<stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: ret
 */

int _strcmp(char *s1, char *s2)
{
int i, ret;
i = 0;
ret = 0;
while (s1[i] != '\0')
{
if (s1[i] != s2[i])
{
ret = s1[i] - s2[i];
break;
}
}
return (ret);
}

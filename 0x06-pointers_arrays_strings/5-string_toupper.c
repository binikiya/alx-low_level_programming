#include<stdio.h>

/**
 * string_toupper - changes all lowercase to uppercase
 * @s: string to be converted
 * Return: converted string
 */

char *string_toupper(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
if (s[i] >= 97 && s[i] <= 122)
{
s[i] = s[i] - 32;
}
i++;
}
return (s);
}

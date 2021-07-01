#include "holberton.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 * Return: capitalized string
 */

char *cap_string(char *s)
{
int i, j;
i = 0;
j = 0;
char sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
while (s[i] != '\0')
{
while (sep[j] != '\0')
{
if (s[i] == sep[j])
{
if (s[i + 1] >= 97 && s[i + 1] <= 122)
s[i + 1] = s[i + 1] - 32;
}
else if (i == 0)
{
if (s[i] >= 97 && s[i] <= 122)
s[i] = s[i] - 32;
}
j++;
}
i++;
}
return (s);
}

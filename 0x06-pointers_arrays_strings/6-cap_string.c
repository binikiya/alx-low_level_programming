#include<stdio.h>

/**
 * *cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 * Return: capitalized string
 */

char *cap_string(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
if (s[i] == ' ' || s[i] == ';' || s[i] == '\n' || s[i] == '\t'
|| s[i] == ',' || s[i] == '.' || s[i] == '!' || s[i] == '?'
|| s[i] == '"' || s[i] == '(' || s[i] == ')'
|| s[i] == '{' || s[i] == '}')
if (i + 1 >= 'a' && i + 1 <= 'z')
s[i + 1] = s[i + 1] - 32;
j++;
}
if (s[0] >= 'a' && s[0] <= 'z')
s[0] = s[0] - 32;
return (s);
}

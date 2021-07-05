#include<stdio.h>
#include<stddef.h>

/**
 * *_strchr - locates a character in string
 * @s: string where the char located
 * @c: the character to be located
 * Return: s
 */

char *_strchar(char *s, char c)
{
unsigned int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (s + i);
if (s[i + 1] == c)
return (s + i + 1);
}
return NULL;
}

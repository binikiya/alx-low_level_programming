#include<stdio.h>
#include<holberton.h>

/**
 * *_strchr - locates a character in string
 * @s: string where the char located
 * @c: the character to be located
 * Return: s
 */

char *_strchar(char *s, char c)
{
  unsigned int i;
  for (; ; i++)
    {
      if (s[i] == c)
	  return (&(s[i]));
      if (!s[i])
	return NULL;
    }
}

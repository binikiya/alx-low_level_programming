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
  int a, b;
  a = 0;
  while (s[a])
    {
      a++;
    }
  for (b = 0; b <= a; b++)
    {
      if (c == s[b])
	{
	  s += b;
	  return (s);
	}
    }
  return ('\0');
}

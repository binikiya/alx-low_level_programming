#include<stdio.h>
#include<stddef.h>

/**
 * *_strstr - locates the first occurence of string
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the begginig of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
  int a, b;
  a = 0;
  b = 0;
  while (haystack[a])
    {
      while (needle[b])
	{
	  if (haystack[a + b] != needle[b])
	    {
	      break;
	    }
	  b++;
	}
      if (needle[b] == '\0')
	{
	  return (haystack + a);
	}
      a++;
    }
  return ('\0');
}

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
char sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

while (s[i] != '\0'){
i++;
}
for (j = 0; j < i; j++)
{
  if (s[j] == 32 || s[j] == 44 || s[j] == 9 ||
      s[j] == 10 || s[j] == 59 || s[j] == 34 ||
      s[j] == 41 || s[j] == 125 || s[j] == 46 ||
      s[j] == 123 || s[j] == 33 || s[j] == 63)
    {
      if (s[j + 1] >= 97 && s[j + 1] <= 122)
	{
	  s[j + 1] -= 32;
	}
    }
}
if (s[0] >= 97 && s[0] <= 122)
{
s[0] -= 32;
}
return (s);
}

#include<stdio.h>

/**
 * *infinite_add - adds two numbers
 * @n1: first number to be added
 * @n2: second number to be added
 * @r: the buffer used to store the result
 * @size_r: the buffer size
 * Return: Pointer of new number
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
  int longn1, longn2, big, op, add;
  for (longn1 = 0; n1[longn1] != '\0'; longn1++)
    {
      for (longn2 = 0; n2[longn2] != '\0'; longn2++)
	{
	  if (longn1 >= longn2)
	    big = longn1;
	  else
	    big = longn2;
	}
    }
  if (size_r <= (big + 1))
    return (0);
  while (big > 0)
    {
      if (longn1 >= 0 && longn2 >= 0)
	{
	  op = (*(n1 + longn1) - '0') + (*(n2 + longn2) - '0') + add;
	}
      else
	{
	  if (longn1 < 0 && longn2 >= 0)
	    op = (*(n2 + longn2) - '0') + add;
	  else
	    {
	      if (longn1 >= 0 && longn2 < 0)
		op = (*(n1 + longn1) - '0') + add;
	    }
	}
      *(r + big) = (op % 10) + '0';
      add = op / 10;
      longn1--;
      longn2--;
      big--;
    }
  if (*(r + 0) == 0)
    return (r + 1);
  r[big + 1] = '\n';
  return (r);
}

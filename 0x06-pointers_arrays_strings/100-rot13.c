#include<stdio.h>

/**
 * *rot13 - encodes based on rot13
 * @s: encoded string
 * Return: encoded
 */

char *rot13(char *s)
{
char abc[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char rot[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
int i;
int j;
 for (i = 0; s[i] != '\0'; i++)
   {
     for (j = 0; j < 52; j++)
       {
	 if (s[i] == abc[j])
	   {
	     s[i] = rot[j];
	     break;
	   }
       }
   }
return (s);
}

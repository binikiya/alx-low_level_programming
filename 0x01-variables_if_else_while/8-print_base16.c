#include<stdio.h>

/**
 *main - returns all base16 numbers and letters
 *
 *Return: always returns 0
 */

int main(void)
{
int n;
int ch;
for(n = 0;n <= 9;n++)
  putchar((n%10) + '0');
for(ch = 'a';ch <= 'f';ch++)
  putchar(ch);
putchar("\n");
  
return (0);
}

#include<stdio.h>

/**
 *main - return lowercase english alphabets followed by uppercase english alphabets
 *
 *Return: Allways returns 0
 */

int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');

return (0);
}

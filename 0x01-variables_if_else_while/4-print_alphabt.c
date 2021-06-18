#include<stdio.h>

/**
 *main - prints english lowercase letters except a and q
 *
 *Return: Always returns 0
 */

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
if (ch != 'e' && ch != 'q')
putchar(ch);
putchar('\n');

return (0);
}

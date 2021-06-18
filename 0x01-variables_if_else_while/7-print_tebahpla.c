#include<stdio.h>

/**
 *main - returns reversed english alphabets
 *
 *Return: always return 0
 */

int main(void)
{
char ch;

for(ch = 'z';ch >= 'a';ch--)
putchar(ch);
putchar('\n');

return (0);
}

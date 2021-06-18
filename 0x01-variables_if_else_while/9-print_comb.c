#include<stdio.h>

/**
 *main - prints all combination of digits followed by space and comma
 *
 *Return: always return 0
 */

int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar((n % 10) + '0');
if (n == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');

return (0);
}

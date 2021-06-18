#include<stdio.h>

/**
 *main - prints all combination of digits followed by space and comma
 *
 *Return: always return 0
 */

int main(void)
{
int n = 0;
while (n <= 9)
{
putchar((n % 10) + '0');
if (n == 9)
continue;
putchar(',');
putchar(' ');
n++;
}
putchar('\n');

return (0);
}

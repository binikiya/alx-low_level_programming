#include<stdio.h>

/**
 *main - prints all combination of digits followed by space and comma
 *
 *Return: always return 0
 */

int main(void)
{
int n = 0;
while(n <= 0){
putchar((n%10) + '0');
putchar(',');
putchar(' ');
n++;
}
putchar('\n');

return (0);
}

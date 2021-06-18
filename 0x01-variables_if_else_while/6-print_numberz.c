#include<stdio.h>

/**
 *main - prints 10 base numbers without using char variable and printf and puts function
 *
 *Return: always prints 0
 */

int main(void)
{
int n = 0;
while(n <= 9){
putchar((n%10) + '0');
n++;
}
putchar('\n');

return (0);
}

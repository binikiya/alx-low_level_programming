#include<stdio.h>

/**
 * main - prints largest prime factor of 612852475143
 * Return: 0
 */

int main(void)
{
unsigned long p, i, n;
n = 612852475143;
int isP;
for (i = 2; i <= n; i++)
{
isP = 1;
for (p = 2; p < i; p++)
{
if (i % p == 0)
{
isP = 0;
break;
}
}
if (isP == 1 && (n % i == 0))
n /= i;
}
printf("\n");
}

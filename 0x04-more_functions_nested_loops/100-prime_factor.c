#include<stdio.h>

/**
 * main - prints largest prime factor of 612852475143
 * Return: 0
 */

int main(void)
{
long p, div;
p = 612852475143;

while (div < (p / 2))
{
if ((p % 2) == 0)
{
p /= 2;
continue;
}
for (div = 3; div < (p / 2); div += 2)
{
if (p % div == 0)
p /= div;
}
}
printf("%ld\n", p);

return (0);
}

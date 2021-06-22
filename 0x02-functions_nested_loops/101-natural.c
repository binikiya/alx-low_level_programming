#include<stdio.h>
#include "holberton.h"

/**
 *main - prints the sum of multiples of 3 or 5 bellow 1024
 *
 *Return: always return 0
 */

int main(void)
{
int n = 0;
int sum = 0;
while (n < 1024)
{
if ((n % 3) == 0 || (n % 5) == 0)
sum += n;
n++;
}
printf("%d\n", sum);
return (0);
}

#include<stdio.h>
#include "holberton.h"

/**
 *main - prints fibonacci numbers
 *
 *Return: always return 0
 */

int main(void)
{
int count = 0;
unsigned long fb1 = 0, fb2 = 1, sum;

while (count < 50)
{
sum = fb1 + fb2;
fb1 = fb2;
printf("%lu", sum);
fb2 = sum;
if (count == 49)
printf("\n");
else
printf(", ");
count++;
}
return (0);
}

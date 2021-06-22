#include<stdio.h>
#include "holberton.h"

/**
 *main - prints sum of even fibonacci
 *
 *Return: always return 0
 */

int main(void)
{
float sum;
unsigned long fb1 = 0, fb2 = 1, tot;

while (1)
{
tot = fb1 + fb2;
if (tot > 4000000)
break;

if ((tot % 2) == 0)
sum += tot;

fb1 = fb2;
fb2 = tot;
}
printf("%.0f\n",  sum);

return (0);
}

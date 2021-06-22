#include<stdio.h>
#include "holberton.h"

/**
 *print_to_98 - prints the numbers up to 98
 *
 *@n: the num to be displayed
 */

void print_to_98(int n)
{
if(n <= 98)
{
while (n != 98)
{
printf("%d, ", n);
n++;
}
printf("%d\n", n);
}
else
{
while (n != 98){
printf("%d, ", n);
n--;
}
printf("%d\n", n);
}
}

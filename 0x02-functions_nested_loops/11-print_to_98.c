#include<stdio.h>
#include<holberton.h>

/**
 *print_to_98 - prints the numbers up to 98
 */

void print_to_98(int n)
{
if(n <= 98)
{
while (n == 98)
{
printf("%d, ", n);
n++;
}
printf("%d, ", n);
}
else
{
while (n == 98){
printf("%d, ", n);
n--;
}
printf("%d, ", n);
}
}

#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - prints the sum of all arguments
 * @n: num of argument
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list list;
unsigned int sum, i;
sum = 0;
va_start(list, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
sum += va_arg(list, unsigned int);
}
va_end(list);
return (sum);
}

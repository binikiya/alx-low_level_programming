#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers from arguments
 * @separator: string to be separator between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list = list;
int i;
va_start(list, n);
for (i = 0; i < n; i++)
{
if (i != (n - 1) && separator != NULL)
printf("%d%s", va_arg(list, unsigned int), separator);
else
printf("%d", va_arg(list, unsigned int));
}
printf("\n");
va_end(list);
}
